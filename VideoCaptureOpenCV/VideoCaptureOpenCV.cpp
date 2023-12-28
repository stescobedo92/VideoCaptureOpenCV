#include "VideoCaptureOpenCV.h"

using namespace std;
using namespace cv;

int main()
{
	Mat image;
	namedWindow("WebCam");
	VideoCapture cap(0);

	if (!cap.isOpened()) {
		cout << "cannot open camera";
	}

	while (true) {
		cap >> image;
		imshow("WebCam", image);
		waitKey(25);
	}

	return 0;
}
