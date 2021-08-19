#pragma once

enum proce
{
	processing,
	waiting,
	finished
};
//

typedef struct Node{
	int customer;
	string ServiceStyle;
	int duringTime;
	proce processStat;
	struct Node* link;
}CustomerChartNode;

typedef struct {
	CustomerChartNode* head;
	CustomerChartNode* rear;
	int count;//un init
}CustomerChart;