#include <opencv2/opencv.hpp>
#include <iostream>

using namespace cv;
using namespace std;

int main()
{
    // 1. Cargar la imagen original (se carga en color BGR por defecto)
    string path = "C:/Users/macia/source/repos/Opencv_Test/img/hxh.jpg";
    Mat img_original = imread(path);

    if (img_original.empty())
    {
        cout << "Error: No se encuentra la imagen." << endl;
        return -1;
    }

    // CONVERTIR A BLANCO Y NEGRO 

    Mat img_gris; // Creamos una variable nueva para guardar la versión en gris

    // Usamos cvtColor(imagen_origen, imagen_destino, codigo_de_conversion)
    // COLOR_BGR2GRAY significa "De Azul-Verde-Rojo a Gris"
    cvtColor(img_original, img_gris, COLOR_BGR2GRAY);



    // Configuración de ventana (para que no salga gigante)
    namedWindow("Imagen Blanco y Negro", WINDOW_NORMAL);
    resizeWindow("Imagen Blanco y Negro", 800, 600);

    // MOSTRAR LA IMAGEN GRIS (Ojo: ahora mostramos 'img_gris')
    imshow("Imagen Blanco y Negro", img_gris);

    cout << "Presiona una tecla en la ventana de la imagen para salir..." << endl;

    // Espera y limpieza
    waitKey(0);
    destroyAllWindows();

    return 0;
}