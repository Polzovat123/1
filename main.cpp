#include <iostream>
#include <set>
#include <math.h>

using namespace std;

set<int> nomber;

int main_int;
int len;
int l;
int answ;

void check(int a){
    while(a>10){
        a/=10;
        len++;
    }
    len++;
    cout<<"Len today: "<<len<<endl;
    cout<<"Operation successful [2/5]"<<endl;
}

void pre_start(){
    cout<<"This module not a want work."<<endl;
}

void start(){
    cout<<"Enter you nomber->: ";
    scanf("%*i.%i", &main_int);
    cout<<"Operation successful [1/5]"<<endl;
    check(main_int);
}

void main_iterration(){
    cout<<"Start chekking..."<<endl;
    int j=0;
    while(true){
        //1
        j++;
        main_int*=8;
        main_int = main_int % (int)(pow(10,len));
        int u = main_int;
        cout<<"Now iteration:"<<j<<endl<<"Остаток от деления: "<<u<<endl;
        //2
        cout<<*nomber.find(u)<<endl;
        if(u<0){
            cout<<"Мы нашли проблему, начинаем анализ..."<<endl;
            cout<<"Result set: "<<*nomber.find(u)<<endl;
            cout<<"Mainint: "<<main_int<<endl;
        }
        if(u == 0){
            answ = 0;
            break;
        }

        if(*nomber.find(u)==u){
            answ = 1;
            break;
        }else{
            nomber.insert(u);
        }
    }
}

void end_program(){
    cout<<"Operation successful [5/5]"<<endl;
    if(answ == 0){
        cout<<"Все делиться уходя в ноль"<<endl;
    }else if(answ == 1){
        cout<<"Найден период..."<<endl;
    }else{
        cout<<"Уходит в бесконечность."<<endl;
    }
}

int main()
{
    start();
    cout<<"Operation successful [3/5]"<<endl;
    main_iterration();
    cout<<"Operation successful [4/5]"<<endl;
    end_program();
    return 0;
}
