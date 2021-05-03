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

#include <fstream>
#define FILENAME "empFile.txt"

using namespace std;  //使用标准命名空间

class WorkerManager{
public:
    WorkerManager();  //构造函数

    void  Show_Menu();  // 展示菜单

    void ExitSystem();  //退出程序

    int m_EmpNum;    //记录职工人数

    Worker ** m_EmpArray; // 职工数组指针

    void Add_Emp();  // 添加职工

    //保存文件
    void save();

    //判断文件是否为空 标志
    bool m_FileIsEmpty = false;   //注意这里默认为false ,写出来比较好,否则有时会出问题

    //统计文件中的人数
    int get_EmpNum();

    //初始化员工
    void init_Emp();

    //显示职工
    void Show_Emp();

    //删除职工
    void Del_Emp();

    //判断员工是否存在,如果存在,返回职工所在数组中的位置,不存在返回-1
    int IsExist(int id);

    //修改职工
    void Mod_Emp();

    //查找职工
    void Find_Emp();

    //按照编号排序
    void Sort_Emp();


    //清空文件
    void Clean_File();

    ~WorkerManager(); //析构函数
};