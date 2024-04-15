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
     std::istream_iterator<char> start2(is2), end2;  
     std::vector<QString> list_of_fonts(start2, end2);
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////// 
     for (int x=0;x<2462 ; x++) {
               
          }
   /// 
   QString stroka1="magick compare -metric MAE \"/home/viktor/my_projects_qt_2/kartinki_iz_shriftov/papka-fonts-sort/obrez_snizu/polniy_obrez/black-white/";
list_of_fonts[0]; 
QString stroka2="\" “/home/viktor/my_projects_qt_2/kartinki_iz_shriftov/papka-fonts-sort/obrez_snizu/polniy_obrez/black-white/”;
list_of_fonts[1] ;
QString stroka3="\" null: 2>&1"; 
   ///          
     }

Dialog::~Dialog()
     {
          delete ui;
     }

