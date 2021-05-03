//
// Created by Asaki on 2021/4/24.
//

#ifndef EMPLOYEE_MANAGEMENT_SYSTEM_EMPLOYEE_H
#define EMPLOYEE_MANAGEMENT_SYSTEM_EMPLOYEE_H

#endif //EMPLOYEE_MANAGEMENT_SYSTEM_EMPLOYEE_H
#pragma once
#include<iostream>
using namespace std;
#include"worker.h"

class Employee : public Worker{
    //显示个人信息
    virtual void showInfo() ;

    //获取岗位名称
    virtual string getDeptName() ;

public:
//构造函数
Employee(int id,string name, int dId);

};