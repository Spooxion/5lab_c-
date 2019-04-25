#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "bird.h"



MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
      ui(new Ui::MainWindow)
  {

        ui->setupUi(this);
        QPixmap bkgnd(":/azaza/Documents/Lab_5/img.jpg");
        bkgnd = bkgnd.scaled(this->size(), Qt::IgnoreAspectRatio);
        QPalette palette;
        palette.setBrush(QPalette::Background, bkgnd);
        ui->label->setStyleSheet("color: rgb(171, 171, 171)");
        ui->label_2->setStyleSheet("color: rgb(171, 171, 171)");
        ui->label_3->setStyleSheet("color: rgb(171, 171, 171)");
        ui->label_4->setStyleSheet("color: rgb(171, 171, 171)");
        ui->label_5->setStyleSheet("color: rgb(171, 171, 171)");
        ui->label_6->setStyleSheet("color: rgb(171, 171, 171)");
        ui->label_7->setStyleSheet("color: rgb(171, 171, 171)");
        ui->label_8->setStyleSheet("color: rgb(171, 171, 171)");
        ui->label_9->setStyleSheet("color: rgb(171, 171, 171)");
        ui->label_10->setStyleSheet("color: rgb(171, 171, 171)");
        ui->label_11->setStyleSheet("color: rgb(171, 171, 171)");
        ui->label_12->setStyleSheet("color: rgb(171, 171, 171)");
        ui->label_13->setStyleSheet("color: rgb(171, 171, 171)");
        ui->label_14->setStyleSheet("color: rgb(171, 171, 171)");
        ui->label_15->setStyleSheet("color: rgb(171, 171, 171)");
        ui->label_16->setStyleSheet("color: rgb(171, 171, 171)");

        this->setPalette(palette);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::Save()
{

}


void MainWindow::on_tableWidget_2_cellPressed(int row, int column)
{
   chosed_row2 = row;
   chosed_column2 = column;
}

void MainWindow::on_tableWidget_cellPressed(int row, int column)
{
    chosed_row1 = row;
    chosed_column1 = column;
}

void MainWindow::on_pushButton_clicked()
{
    QString buffer;
    buffer.setNum(counter1 +1);
    rows1.push_back(buffer);

    ui->tableWidget->insertRow(counter1);
    ui->tableWidget->setVerticalHeaderLabels(rows1);

    QString name = ui->lineEdit->text();
    QString weight = ui->lineEdit_2->text();
    QString age = ui->lineEdit_4->text();
    QString typeoffly = ui->lineEdit_5->text();
    QString male = ui->lineEdit_6->text();
    QString usefull = ui->lineEdit_3->text();
    QString nick = ui->lineEdit_7->text();

    Bird* b = new Domestic(name,weight,age,typeoffly,male,usefull,nick);
    this->bird1[counter1]=b;


    QTableWidgetItem *item = new QTableWidgetItem();
    item->setText(this->bird1[counter1]->getName());
    ui->tableWidget->setItem(counter1, 0, item);

    QTableWidgetItem *item1 = new QTableWidgetItem();
    item1->setText(this->bird1[counter1]->getWeight());
    ui->tableWidget->setItem(counter1, 1, item1);

    QTableWidgetItem *item2 = new QTableWidgetItem();
    item2->setText(this->bird1[counter1]->getAge());
    ui->tableWidget->setItem(counter1, 2, item2);

    QTableWidgetItem *item3 = new QTableWidgetItem();
    item3->setText(this->bird1[counter1]->getTypeofFly());
    ui->tableWidget->setItem(counter1, 3, item3);

    QTableWidgetItem *item4 = new QTableWidgetItem();
    item4->setText(this->bird1[counter1]->getMale());
    ui->tableWidget->setItem(counter1, 4, item4);

    QTableWidgetItem *item5 = new QTableWidgetItem();
    item5->setText(static_cast<Domestic*>(bird1[counter1])->getUseful());
    ui->tableWidget->setItem(counter1, 5, item5);

    QTableWidgetItem *item6 = new QTableWidgetItem();
    item6->setText(static_cast<Domestic*>(bird1[counter1])->getNickName());
    ui->tableWidget->setItem(counter1, 6, item6);

    ui->lineEdit->clear();
    ui->lineEdit_2->clear();
    ui->lineEdit_3->clear();
    ui->lineEdit_4->clear();
    ui->lineEdit_5->clear();
    ui->lineEdit_6->clear();
    ui->lineEdit_7->clear();
    counter1++;
}

void MainWindow::on_pushButton_2_clicked()
{

    ui->tableWidget->removeRow(chosed_row1);
    if(counter1 == 0 )
    {
        QMessageBox::warning(this, "Ошибка", "Таблица на данный момент пустая");
    }
    else {
        chosed_row1 = ui->tableWidget->selectionModel()->currentIndex().row();
        for(int i = chosed_row1; i < rows1.size() - 1; ++i)
        {
            QString str;
            str.setNum(i+1);
            rows1[i] = str;
        }
        rows1.erase(--rows1.end());
        ui->tableWidget->setVerticalHeaderLabels(rows1);

        counter1--;
        }
}

void MainWindow::on_pushButton_3_clicked()
{
    QString buffer;
    buffer.setNum(counter2 +1);
    rows2.push_back(buffer);

    ui->tableWidget_2->insertRow(counter2);
    ui->tableWidget_2->setVerticalHeaderLabels(rows2);

    QString name = ui->lineEdit_10->text();
    QString weight = ui->lineEdit_14->text();
    QString age = ui->lineEdit_13->text();
    QString typeoffly = ui->lineEdit_12->text();
    QString male = ui->lineEdit_11->text();
    QString typeoffood = ui->lineEdit_9->text();
    QString fearofman = ui->lineEdit_8->text();

    Bird* B = new Wild(name,weight,age,typeoffly,male,typeoffood,fearofman);
   this->bird2[counter2]=B;


    QTableWidgetItem *Item = new QTableWidgetItem();
    Item->setText(this->bird2[counter2]->getName());
    ui->tableWidget_2->setItem(counter2, 0, Item);

    QTableWidgetItem *Item1 = new QTableWidgetItem();
    Item1->setText(this->bird2[counter2]->getWeight());
    ui->tableWidget_2->setItem(counter2, 1, Item1);

    QTableWidgetItem *Item2 = new QTableWidgetItem();
    Item2->setText(this->bird2[counter2]->getAge());
    ui->tableWidget_2->setItem(counter2, 2, Item2);

    QTableWidgetItem *Item3 = new QTableWidgetItem();
    Item3->setText(this->bird2[counter2]->getTypeofFly());
    ui->tableWidget_2->setItem(counter2, 3, Item3);

    QTableWidgetItem *Item4 = new QTableWidgetItem();
    Item4->setText(this->bird2[counter2]->getMale());
    ui->tableWidget_2->setItem(counter2, 4, Item4);

    QTableWidgetItem *Item5 = new QTableWidgetItem();
    Item5->setText(static_cast<Wild*>(bird2[counter2])->getTypeofFood());
    ui->tableWidget_2->setItem(counter2, 5, Item5);

    QTableWidgetItem *Item6 = new QTableWidgetItem();
    Item6->setText(static_cast<Wild*>(bird2[counter2])->getFearofMan());
    ui->tableWidget_2->setItem(counter2, 6, Item6);

    ui->lineEdit_8->clear();
    ui->lineEdit_9->clear();
    ui->lineEdit_10->clear();
    ui->lineEdit_11->clear();
    ui->lineEdit_12->clear();
    ui->lineEdit_13->clear();
    ui->lineEdit_14->clear();
    counter2++;
}

void MainWindow::on_pushButton_5_clicked()
{
    ui->tableWidget_2->removeRow(chosed_row2);
    if(counter2 == 0)
    {
        QMessageBox::warning(this, "Ошибка", "Таблица на данный момент пустая");
    }
    else {
        chosed_row2 = ui->tableWidget_2->selectionModel()->currentIndex().row();
        for(int i = chosed_row2; i < rows2.size() - 1; ++i)
        {
            QString str;
            str.setNum(i+1);
            rows2[i] = str;
        }
        rows2.erase(--rows2.end());
        ui->tableWidget_2->setVerticalHeaderLabels(rows2);

        counter2--;

    }
}

void MainWindow::on_pushButton_4_clicked()
{
    this->close();
}


/*QString name;
QString weight;
QString age;
QString type_of_fly;
QString male;
    QString nickname;
    QString useful;*/

/*QString name;
QString weight;
QString age;
QString type_of_fly;
QString male;
    QString type_of_food;
    QString fear_of_man;
    */


void MainWindow::on_action_save_as_triggered()
{
    QStringList save_project;
    for(unsigned int i=0;i<bird1.size();i++)
        {
            save_project<<bird1[i]->getName().toUtf8()<<"\n";
            save_project<<bird1[i]->getWeight().toUtf8()<<"\n";
            save_project<<bird1[i]->getAge().toUtf8()<<"\n";
            save_project<<bird1[i]->getTypeofFly().toUtf8()<<"\n";
            save_project<<bird1[i]->getMale().toUtf8()<<"\n";
            save_project<<bird1[i]->(static_cast<Wild*>(bird1[counter2])->getFearof());
            save_project<<bird1[i]->getCost().toUtf8()<<"\n";
        }
    QString my_file = QFileDialog::getSaveFileName(this, tr("Сохранить как"), QDir::currentPath(), tr("File (*.txt)") );
    if(!my_file.isEmpty())
    {
    QFile young(my_file);
    QFile old(file_name);
    old.close();
    young.open(QIODevice::WriteOnly);
    old.open(QIODevice::ReadOnly);
    QByteArray my_buf = old.readAll();
    young.write(my_buf);
    young.close();
    file_name=my_file;
    show_project();

    }
}

void MainWindow::on_action_open_triggered()
{
        QMessageBox:: StandardButton reply = QMessageBox::question(this,
                                                                   "Предупреждение","Сохранить текущий проект перед открытием следующего?",
                                                                   QMessageBox::Yes | QMessageBox::No);
             if (reply==QMessageBox::Yes)
             {
                 on_action_save_triggered();

             }


                chosed_column = 0;
                chosed_row = 0;
                counter = 0;
                columns.clear();
                rows.clear();
                bird1.clear();

                QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));
                QString my_file =  QFileDialog::getOpenFileName(this, tr("Открыть"), QDir::currentPath(), tr("File (*.txt)"));
                QStringList open_project;
                if(!my_file.isEmpty())
                {
                    file_name=my_file;
                    bird1.clear();
                    QFile file(file_name);

                    if (file.open(QIODevice::ReadOnly))
                    {
                    while(!file.atEnd()){open_project<<file.readLine( );}
                    }
                    file.close();

        for(int i=0;i<open_project.size();i+=7){

           QString firstname1 = open_project[i];
           QString thirdname1 = open_project[i+1];
           QString number1 = open_project[i+2];
           QString lastservice1 = open_project[i+3];
           QString date1 = open_project[i+4];
           QString time1 = open_project[i+5];
           QString cost1 = open_project[i+6];

           firstname1.remove(firstname1.size() - 1, 2);
           thirdname1.remove(thirdname1.size() - 1, 2);
           number1.remove(number1.size() - 1, 2);
           lastservice1.remove(lastservice1.size() - 1, 2);
           date1.remove(date1.size() - 1, 2);
           time1.remove(time1.size() - 1, 2);
           cost1.remove(cost1.size() - 1, 2);

           Client *client1 = new Client(firstname1, thirdname1, number1, lastservice1, date1, time1, cost1);
           bird1.push_back(client1);
        }
        line_edit_1_clear();
        line_edit_2_clear();
        show_vector_in_table();
        show_project();
      }
}



void MainWindow::on_action_close_triggered()
{
    QMessageBox:: StandardButton reply = QMessageBox::question(this,"Выход","Сохранить перед закрытием?",QMessageBox::Yes | QMessageBox::No | QMessageBox::Cancel);
         if (reply==QMessageBox::Yes)
         {
             on_action_save_triggered();
             QApplication::quit();
         }
         if (reply==QMessageBox::No)
         {
             QApplication::quit();
         }
}


