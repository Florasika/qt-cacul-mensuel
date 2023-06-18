#include <QGridLayout>
#include <QWidget>
#include <QApplication>
#include <QMessageBox>

#include "mensual.h"


Mensual::Mensual() : QWidget()
{
    lbTitre = new QLabel("Calcul de montant Mensuel");
    lbTitre->setStyleSheet("color : green");
    lbTitre->setFont(QFont("Comic Sans Ms", 20));

    Montant = new QLabel("Montant : ");
    NBAmortis = new QLabel("NbA : ");
    Taxe = new QLabel("Taxe : ");
    mensualite = new QLabel("mensualite : ");
    lbFin = new QLabel("By Flasolia24 Flora");
    lbFin->setStyleSheet("color :blue");

    edMontant = new QLineEdit;
    edNBA = new QLineEdit;
    edTaxe = new QLineEdit;



    edMensualite = new QLineEdit;
    edMensualite->setReadOnly(true);
    edMensualite->setStyleSheet("background-color :Black; color :Yellow");

    btCalculer = new QPushButton("Calculer");
    btCalculer->setStyleSheet("background-color :Orange");

    btCalculer->setCursor(Qt::PointingHandCursor);


     QGridLayout *fond = new QGridLayout;

     fond->addWidget(lbTitre, 0, 0, 1, 5, Qt::AlignCenter);
     fond->addWidget(Montant, 1, 0);
     fond->addWidget(NBAmortis, 2, 0);
     fond->addWidget(Taxe, 3, 0);
     fond->addWidget(lbFin, 4, 2, 1, 3, Qt::AlignRight);
     fond->addWidget(mensualite, 5 , 0);

     fond->addWidget(edMontant, 1, 1);
     fond->addWidget(edNBA, 2, 1);
     fond->addWidget(edTaxe, 3, 1);
     fond->addWidget(btCalculer, 4, 1);
     fond->addWidget(edMensualite, 5, 1);

     connect(btCalculer, SIGNAL(clicked()), this, SLOT(calculer()));
     setLayout(fond);

}


Mensual::~Mensual()
{
}

void Mensual::calculer()
{
    double Montant = edMontant->text().toDouble();
    int nbA = edNBA->text().toInt();
    double Taxe = edTaxe->text().toDouble();

    double m;
    m = (Montant * nbA) / Taxe ;
    edMensualite->setText(QString::number(m));
}
