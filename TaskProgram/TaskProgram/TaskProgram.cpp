// TaskProgram.cpp : 此文件包含 "main" 函数。程序执行将在此处开始并结束。
//

#include <iostream>
#include <fstream>
#include <string>
#include <time.h>   

using namespace std;

int main()
{
	fprintf(stdout, "开始运行\n");

	//延时10S
	fprintf(stdout, "延时10S\n");
	time_t first = time(NULL);
	double diff = 0;
	while (diff<10)
	{
		time_t second = time(NULL);
		diff = difftime(second, first);			//计时		
	}

	ifstream infile("input.txt");
	if (!infile)
	{
		fprintf(stderr, "无法读取文件\n");
		return 1;
	}

	string line;
	getline(infile, line);
	

	ofstream outfile("output.dat");
	if (!outfile)
	{
		fprintf(stderr, "无法写出文件\n");
		return 1;
	}

	outfile << "输出内容:\n";
	outfile << line;

	fprintf(stdout, "运行完成\n");

	return 0;
}

