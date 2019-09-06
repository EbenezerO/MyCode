//
// Created by 13058 on 2019/9/6.
/*
 * 饿汉单例：在类装载时完成了初始化，静态成员对象初始化成功
 * 类加载速度相比懒汉慢，但获取对象的速度快，是一种典型的以时间换取空间的做法
 * 优点：线程安全
 * 缺点：不管你用不用这个对象，他都会先创建出来，会造成浪费内存空间
 */
//
#include <iostream>
using  namespace std;
class Singleton1//饿汉式
{
private:
    Singleton1(){
        cout<<"crete sin1"<<endl;
    }
    ~Singleton1(){
        cout<<"destroy sin1"<<endl;
    }
    static Singleton1* sin;//利用指针来实现
public:
    static Singleton1* getInstance()
    {
        cout<<"get Singleton1"<<endl;
        return sin;
    }
};
Singleton1* Singleton1::sin=new Singleton1();
/*----------------------------------------------------------------------*/
class Singleton2 //懒汉式  不安全
{
private:
    Singleton2(){
        cout<<"crete sin2"<<endl;
    }
    ~Singleton2(){
        cout<<"destroy sin2"<<endl;
    }
    static Singleton2* sin;
public:
    static Singleton2* getInstance()
    {
        if(sin==NULL)//多线程 同时进入 会出现多次实例化对象
        {
            cout<<"crete"<<endl;
            sin=new Singleton2();

        } else
            cout<<"creted"<<endl;
        return sin;
    }
};
Singleton2* Singleton2::sin=NULL;
/*----------------------------*/
class Singleton3   //懒汉式 安全 用互斥锁实现
{
protected:  //protected:只允许子类及本类的成员函数访问
    Singleton3()
    {
        pthread_mutex_init(&mutex,NULL);
    }
private:
    static Singleton3* sin;
public:
    static pthread_mutex_t mutex;
    static Singleton3* getSingleton()
    {
        if(sin==NULL)
        {
            pthread_mutex_lock(&mutex);
            if(sin==NULL)
                sin=new Singleton3();
            pthread_mutex_unlock(&mutex);
        }
        return sin;
    }
};
pthread_mutex_t Singleton3::mutex;
Singleton3* Singleton3::sin=NULL;
/*-------------------------------------------*/
class Singleton4 // 内部静态变量的懒汉实现安全
{
protected:
    Singleton4()
    {
        pthread_mutex_init(&mutex,NULL);
    }
public:
    static pthread_mutex_t mutex;
    static Singleton4* getSingleton();
};

pthread_mutex_t Singleton4::mutex;
Singleton4* Singleton4::getSingleton()
{
    pthread_mutex_lock(&mutex);
    static Singleton4 obj;
    pthread_mutex_unlock(&mutex);
    return &obj;
}
int main()
{
    cout<<"饿汉式"<<endl;
    Singleton1* s1=Singleton1::getInstance();
    Singleton1* s2=Singleton1::getInstance();
    cout<<s1<<endl;
    cout<<s2<<endl;

    cout<<"懒汉式、不安全"<<endl;
    Singleton2* s3=Singleton2::getInstance();
    Singleton2* s4=Singleton2::getInstance();
    cout<<s3<<endl;
    cout<<s4<<endl;
    return 0;
}
