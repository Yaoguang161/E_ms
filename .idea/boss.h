//
// Created by Asaki on 2021/4/24.
//

#ifndef EMPLOYEE_MANAGEMENT_SYSTEM_BOSS_H
#define EMPLOYEE_MANAGEMENT_SYSTEM_BOSS_H

#endif //EMPLOYEE_MANAGEMENT_SYSTEM_BOSS_H
#pragma once
#include<iostream>
using namespace std;

#include"worker.h"
//老板类
class Boss : public Worker{
public:
    //构造函数
    Boss(int id,string name,int dId);

    //显示个人信息
    virtual void showInfo() ;

    //获取岗位名称
    virtual string getDeptName() ;

};