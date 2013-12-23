    #include <qapplication.h>
    #include <qpushbutton.h>
    
    int lance_bash()
    {
        system("bash ./ubuntukeymaker");
    }


    int main( int argc, char **argv )
    {
        QApplication a( argc, argv );

        QPushButton valider( "Lancer", 0 );
        valider.resize( 100, 100 );
        QObject::connect(valider,SIGNAL(clicked()),this,SLOT(lance_bash());
        valider.show();
        return a.exec();
    }