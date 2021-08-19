#include"head.h"


void Push(Window* Queue_temp,int _customer,datatype _betime,int _ServiceTime)
{
	//panduan
	Queue_temp->rear->link = (LinkNode*)malloc(sizeof(LinkNode));
	Queue_temp->rear = Queue_temp->rear->link;
	Queue_temp->rear->customer = _customer;
	Queue_temp->rear->SeviceTime=_ServiceTime;
	Queue_temp->rear->betime=_betime;
	Queue_temp->rear = NULL;
	Queue_temp->Time += _ServiceTime;
}

void Pop(Window* Queue_temp)
{
	//out rich not program
	LinkNode* temp;
	temp = (LinkNode*)malloc(sizeof(LinkNode));
	temp = Queue_temp->head->link;
	Queue_temp->head->link = temp->link;
	free(temp);
}

void WriteChart(CustomerChart* chart, int _customer, string _ServiceStyle, int _duringTime, proce state)
{
	chart->rear = (CustomerChartNode*)malloc(sizeof(CustomerChartNode));
	chart->rear->customer = _customer;
	chart->rear->duringTime = _duringTime;
	chart->rear->processStat = state;
	chart->rear->ServiceStyle = _ServiceStyle;
	chart->count++;
	chart->rear->link = NULL;
	if (chart->head->link = NULL)
	{
		chart->head->link = chart->rear;
	}
	chart->rear->link = NULL;
	chart->rear = chart->rear->link;
}

int GetShort(Window* window[])
{
	int temp=10000;
	int j;
	int num;
	for (j = 0; j < 3; j++)
	{
		if (temp > window[j]->Time)
		{
			temp = window[j]->Time;
			num = j;
		}
	}
	return j;
}
//
void upgrade(Window* window[], int CustomerTime)
{
	int i;
	
	for (i = 0; i < 3; i++)
	{
		while (CustomerTime - window[i]->head->link->betime >= window[i]->head->SeviceTime&&!Empty(window[i])
		{
			CustomerChartNode* p;
			for (p = chart->head->link; p-> != NULL; p = p->link)
			{
				if (p->customer == window[i]->head->link->customer)
					p->processStat = finished;
			}
			Pop(window[i]);
		}
	}
}
//
bool Empty(Window* queue)
{
	if()
}