#include "dialog.h"
#include "ui_dialog.h"
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief main
/// \param argc
/// \param argv
/// \return 
///
#include <fstream>
#include <iostream>
using namespace std;
#include <QProcess>
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/// \brief Dialog::Dialog
/// \param parent
///
Dialog::Dialog(QWidget *parent)
     : QDialog(parent)
     , ui(new Ui::Dialog)
     {
          ui->setupUi(this);

//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////// загрузка синапсов из файла в вектор ////////////////////////////////////////////////////////////////////////////////////////// 
   std::ifstream is2("/home/viktor/my_projects_qt_2/kartinki_iz_shriftov/papka-fonts-sort/obrez_snizu/polniy_obrez/black-white/spisok.txt");  
     std::istream_iterator<std::string> start2(is2), end2;  
     std::vector<std::string> list_of_fonts(start2, end2);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
     for (int x=0;x<2462 ; x++) {
               ;;
          }
   /// 
   QString stroka1=
   "magick compare -metric MAE \"/home/viktor/my_projects_qt_2/kartinki_iz_shriftov/papka-fonts-sort/obrez_snizu/polniy_obrez/black-white/";
//list_of_fonts[0]; 
QString stroka2="\" \"/home/viktor/my_projects_qt_2/kartinki_iz_shriftov/papka-fonts-sort/obrez_snizu/polniy_obrez/black-white/";
//list_of_fonts[1] ;
QString stroka3="\" null: 2>&1"; 
   ///         .toStdString().c_str()
       QString  stroka_vsia=stroka1+list_of_fonts[0].c_str()+stroka2+list_of_fonts[1].c_str()  +stroka3;
        //if (
        
        QProcess process;
process.start(stroka_vsia.toStdString().c_str());
process.waitForFinished(-1); // will wait forever until finished
//QString stdout = process.readAllStandardOutput();
QString stderr = process.readAllStandardError();
        
      //   system (stroka_vsia.toStdString().c_str() );
   //      process.waitForFinished(-1);
// QByteArray out = process.readAllStandardOutput();
std::cout << stderr.toStdString().c_str()  << std::endl; 
//<< stderr.toStdString().c_str()<< std::endl ;
         //=="0 (0)";
   /// 
   /// 
 if (stderr=="0 (0)") std::cout << "!!!!!!"<< std::endl ; // стереть файл
   /// 
   ///  
     }

Dialog::~Dialog()
     {
          delete ui;
     }

