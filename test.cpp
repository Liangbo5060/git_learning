#include <opencv2/opencv.hpp>
#include <iostream>
#include <math.h>

using namespace std;
using namespace cv;

int main(int argc, char** argv)
{
	// IMREAD_UNCHANGED < 0 ͼ�����벻���ı�
	// IMREAD_GRAYSCALE = 0 ͼ����Ϊ�Ҷ�ͼ����
	// IMREAD_COLOR > 0 ͼ���ɫ����
	Mat scr = imread("D:/image/learning/dog.jpg");
	if (scr.empty())
	{
		cout << "ͼ�����ʧ��" << endl;
		system("pause");
		return 0;

	}

	namedWindow("����ͼ��", WINDOW_NORMAL);
	imshow("����ͼ��", scr);

	//�޸�ͼ��Ϊ�Ҷ�ͼ��
	namedWindow("�Ҷ�ͼ��", WINDOW_NORMAL);
	Mat gray_scr;

	//ʹ��cvtColor ���Ըı�ͼ���ɫ�ʿռ�
	cvtColor(scr, gray_scr, COLOR_BGR2GRAY);
	//cvtColor(scr, gray_scr, CV_RGB2HLS);
	imshow("�Ҷ�ͼ��", gray_scr);

	//ͼ�񱣴�
	//imwrite("D:/image/dog.png", gray_scr);


	waitKey(0);
	return 0;
}