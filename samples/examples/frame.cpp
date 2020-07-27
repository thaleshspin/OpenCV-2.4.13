//Exemplo que abre uma janela preta e mostra na tela uma mensagem

#include "opencv2/opencv.hpp"
#include <opencv2/core/core.hpp>       //Estruturas básicas da biblioteca
#include <opencv2/highgui/highgui.hpp> //Funcoes para abrir janela, ler do teclado etc
#include <iostream>

using namespace cv; //Pode gerar problemas ao usar bibliotecas internas que tem funcôes parecidas
using namespace std;
int main(int argc, char **argv)
{
    Mat img;
    VideoCapture cap;
    cap.open(0);
    
    namedWindow("Video", 1);
    bool b = true;
    while (b)
    {
        cap >> img;
        imshow("Video", img);
        if(waitKey(0))
            b = false;
    }
    return 0;
}