#pragma once
#include"head.h"
void CreateAndInit()
{
	Window* window[3];
	window[1] = (Window*)malloc(sizeof(Window));
	window[2] = (Window*)malloc(sizeof(Window));
	window[0] = (Window*)malloc(sizeof(Window));
	window[1]->head = (LinkNode*)malloc(sizeof(LinkNode));
	window[2]->head = (LinkNode*)malloc(sizeof(LinkNode));
	window[0]->head = (LinkNode*)malloc(sizeof(LinkNode));
	window[1]->rear = window[1]->head->link = NULL;
	window[1]->rear = window[1]->head->link = NULL; 
	window[1]->rear = window[1]->head->link = NULL;
	window[1]->Time = 0;
	window[2]->Time = 0;
	window[0]->Time = 0;
	CustomerChart* chart;
	chart->count = 0;
	chart->head = (CustomerChartNode*)malloc(sizeof(CustomerChartNode));
	chart->rear = chart->head->link = NULL;
	//指针的rear指向null
}