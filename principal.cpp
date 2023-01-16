#include "principal.h"
#include "ui_principal.h"

Principal::Principal(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Principal)
{
    ui->setupUi(this);
}

Principal::~Principal()
{
    delete ui;
}

void Principal::paintEvent(QPaintEvent *event)
{
    // Objeto que permite dibujar (QPainter -> Picaso)
    // Se envía como dispositivo a este (this -> esta es la ventana en donde quiero que dibuje) objeto (Principal)
    QPainter painter(this);

    // Establecer un pincel azul
    painter.setPen(Qt::blue);

    // Establecer un tipo de letra y tamaño
    painter.setFont(QFont("Arial", 30));

    // Dibujar un texto
    painter.drawText(rect(), Qt::AlignCenter, "Rodrigo");

    // Crear un pincel específico
    QPen pincel;
    pincel.setColor(Qt::red);
    pincel.setWidth(10);
    pincel.setCapStyle(Qt::RoundCap);

    // utilizar un pincel previamente creado de forma personalizada
    painter.setPen(pincel);

    // Dibujar una línea
    painter.drawLine(100,100, 200,200);

    // Estableer una brocha
    painter.setBrush(Qt::lightGray);

    // Dibujar un rectangulo
    painter.drawRect(300,100,50,100);

    // Crear un nuevo pincel
    QPen pincel2;
    pincel2.setWidth(5);
    pincel2.setColor(Qt::darkGreen);
    pincel2.setStyle(Qt::DotLine);

    // Establecer nuevo pincel
    painter.setPen(pincel2);
    painter.setBrush(Qt::green);

    // Dibujar una circunferencia
    painter.drawEllipse(400,100,50, 50);

    // Dibujar un arco
    QRectF rectangle(500.0, 100.0, 50.0, 50.0);
      int startAngle = 30 * 16;
      int spanAngle = 120 * 16;
    painter.drawArc(rectangle,startAngle, spanAngle);

    //Dibujar una balanza
    QPen pincelLine;
    pincelLine.setWidth(4);
    pincelLine.setColor(Qt::black);
    pincelLine.setStyle(Qt::SolidLine);

    QPen pincelBolas;
    pincelBolas.setWidth(3);
    pincelBolas.setColor(Qt::darkBlue);
    pincelBolas.setStyle(Qt::DotLine);

    QColor colorTrian(233,123,123);
    QPen pincelTrian;
    pincelTrian.setWidth(5);
    pincelTrian.setColor(colorTrian);

    painter.setBrush(Qt::blue);
    painter.setPen(pincelBolas);
    painter.drawEllipse(600,300,50,50);
    painter.drawEllipse(200,500,50,50);

    painter.setPen(pincelLine);
    painter.drawLine(250,525,600,325);

    painter.setPen(pincelTrian);
    painter.drawLine(350,550,500,550);
    painter.drawLine(350,550,425,425);
    painter.drawLine(425,425,500,550);
}

