#ifndef MENSUAL_H
#define MENSUAL_H
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QCombobox>
#include <QPushButton>

class Mensual : public QWidget
{
    Q_OBJECT
public :
    Mensual();//Constructeur
    virtual ~ Mensual(); //Destructeur

private :
     QLabel *lbTitre ;
     QLabel *Montant ;
     QLabel *NBAmortis ;
     QLabel *Taxe ;
     QLabel *mensualite ;
     QLabel *lbFin ;
     QLineEdit *edMontant ;
     QLineEdit *edNBA ;
     QLineEdit *edTaxe ;
     QLineEdit *edMensualite ;
     QPushButton *btCalculer ;









public slots :
    //void terminer();
    void calculer();

};

#endif // MENSUAL_H
