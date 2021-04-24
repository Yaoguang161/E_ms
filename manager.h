//
// Created by Asaki on 2021/4/24.
//

#ifndef EMPLOYEE_MANAGEMENT_SYSTEM_MANAGER_H
#define EMPLOYEE_MANAGEMENT_SYSTEM_MANAGER_H

#endif //EMPLOYEE_MANAGEMENT_SYSTEM_MANAGER_H
#pragma once
#include <iostream>
using namespace std;

#include"worker.h"

class Manager : public Worker{
public:
    //构造函数
    Manager(int id,string name,int dId);

    //显示个人信息
    virtual void showInfo() ;

    //获取岗位名称
    virtual string getDeptName() ;

};