//
// Created by Asaki on 2021/4/24.
//

#ifndef EMPLOYEE_MANAGEMENT_SYSTEM_WORKERMANAGER_H
#define EMPLOYEE_MANAGEMENT_SYSTEM_WORKERMANAGER_H

#endif //EMPLOYEE_MANAGEMENT_SYSTEM_WORKERMANAGER_H

#pragma once   //防止头文件重复包含
#include<iostream>  //包含输入输出流的头函数
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

using namespace std;  //使用标准命名空间

class WorkerManager{
public:
    WorkerManager();  //构造函数

    void  Show_Menu();  // 展示菜单

    void ExitSystem();  //退出程序

    int m_EmpNum;    //记录职工人数

    Worker ** m_EmpArray; // 职工数组指针

    void Add_Emp();  // 添加职工

    ~WorkerManager(); //析构函数
};