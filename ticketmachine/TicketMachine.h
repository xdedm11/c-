#pragma once
//declarations      extern variable;function prototype;class declaration
//���ֶ��壬���cpp����ͷ�ļ�ʱduplicate sample
#ifndef FLAG
#define FLAG


class TicketMachine
{
public:
    void initialization();      //��Ա����������
    void showPrompt();
    void getMoney();
    //void printTicket();
    void showBalance();
    //void printError();
    void insertMoney(int money);
    int refundBalance();
private:
    const int price=100;        //��Ա�������ڶ���
    int balance;
    //int total;
    int money;
};

#endif