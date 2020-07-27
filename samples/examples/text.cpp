//Exemplo que abre uma janela preta e mostra na tela uma mensagem

#include "opencv2/opencv.hpp"
#include <opencv2/core/core.hpp>       //Estruturas básicas da biblioteca
#include <opencv2/highgui/highgui.hpp> //Funcoes para abrir janela, ler do teclado etc
#include <iostream>

using namespace cv; //Pode gerar problemas ao usar bibliotecas internas que tem funcôes parecidas
using namespace std;
int main(int argc, char **argv)
{
    Mat img = Mat::zeros(480, 640, CV_8UC3); //Cria uma imagem e enche de zeros com três colunas e cada coluna é o um char com 8bits (1 byte). Lembrando que pode ser vista como uma matriz (linhas, colunas, pixel). Cada elemento tem 3 bytes
    string msg("Ola OpenCV");

    putText(img, msg, Point(240, 320), 0, 1, Scalar(0, 0, 255), 1); //Coloca o texto na tela. A OpenCV nao trabalha com RGB, e sim com BGR
    namedWindow("ola_window", CV_WINDOW_AUTOSIZE); //Cria uma janela e administra o tamanho da janela
    imshow("ola_window", img); //Mostra a imagem (toda preta)
   
    waitKey(0); //Aguarda para nao fechar de cara
    return 0;
}