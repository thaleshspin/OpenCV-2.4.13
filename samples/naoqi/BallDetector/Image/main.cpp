#include "opencv2/opencv.hpp"
#include "opencv2/imgproc/imgproc.hpp"
#include "opencv2/highgui/highgui.hpp"
#include "opencv2/objdetect/objdetect.hpp"
#include "opencv2/core/core.hpp"

#include <iostream>

using namespace std;
using namespace cv;

int main(int argc, char **argv)
{

    CascadeClassifier cascade;
    cascade.load("cascade.xml");

    Mat frame;
    frame = imread(argv[1], IMREAD_COLOR);

    Mat resized_frame(Size(320, 240), CV_8UC3);
    resize(frame, resized_frame, resized_frame.size());
    frame = resized_frame.clone();

    std::vector<Rect> balls;
    Mat frame_gray;

    cvtColor(frame, frame_gray, COLOR_BGR2GRAY);
    //inRange(frame, Scalar(38, 50, 50), Scalar(75, 255, 255), frame_gray); //problemas aqui
    
    //cascade.detectMultiScale(frame_gray, balls, 1.3, 5, 8, Size(16, 16)); //Rinobot
    cascade.detectMultiScale(frame_gray, balls, 1.1, 5, 8, Size(16, 16));

    if (balls.size() == 0)
    {
        cout << "Nao achou nada" << endl;
    }
    else
    {
        double raio = balls[0].width / 2.0f;
        Point pt(balls[0].x + raio, balls[0].y + raio);
        cout << "Encontrado: " << pt << " [ " << raio << " ] " << endl;
        circle(frame, pt, raio, Scalar(0, 0, 255), CV_FILLED);
    }

    imshow("frame", frame);
    int key = waitKey(0);
}
