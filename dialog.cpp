#include "dialog.h"
#include "ui_dialog.h"
#include<vector>
#include<QDebug>
using  namespace std;
int sign = 0;
Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    setWindowTitle(tr("Calculator"));
    ui->textEdit_Input->setEnabled(false);
    ui->textEdit_Input->setText("");
    connect(this,&Dialog::SendNum,this,&Dialog::ReadNum);
    connect(this,&Dialog::SendOpe,this,&Dialog::ReadOpe);

    connect(ui->dengyu,&QPushButton::clicked,this,&Dialog::SUM);
    //数字信号
    connect(ui->zero,&QPushButton::clicked,[=]()->void{
        emit SendNum(0);
        qDebug()<<"输入0";
    });
    connect(ui->one,&QPushButton::clicked,[=]()->void{
        emit SendNum(1);
        qDebug()<<"输入1";
    });
    connect(ui->two,&QPushButton::clicked,[=]()->void{
        emit SendNum(2);
        qDebug()<<"输入2";
    });
    connect(ui->three,&QPushButton::clicked,[=]()->void{
        emit SendNum(3);
        qDebug()<<"输入3";
    });
    connect(ui->four,&QPushButton::clicked,[=]()->void{
        emit SendNum(4);
        qDebug()<<"输入4";
    });
    connect(ui->five,&QPushButton::clicked,[=]()->void{
        emit SendNum(5);
        qDebug()<<"输入5";
    });
    connect(ui->sex,&QPushButton::clicked,[=]()->void{
        emit SendNum(6);
        qDebug()<<"输入6";
    });
    connect(ui->seven,&QPushButton::clicked,[=]()->void{
        emit SendNum(7);
        qDebug()<<"输入7";
    });
    connect(ui->eight,&QPushButton::clicked,[=]()->void{
        emit SendNum(8);
        qDebug()<<"输入8";
    });
    connect(ui->nine,&QPushButton::clicked,[=]()->void{
        emit SendNum(9);
        qDebug()<<"输入9";
    });
    //字符信号
    connect(ui->add,&QPushButton::clicked,[=]()->void{
        emit SendOpe("+");
        qDebug()<<"输入+";
    });
    connect(ui->subtract,&QPushButton::clicked,[=]()->void{
        emit SendOpe("-");
        qDebug()<<"输入-";
    });
    connect(ui->ride,&QPushButton::clicked,[=]()->void{
        emit SendOpe("*");
        qDebug()<<"输入*";
    });
    connect(ui->except,&QPushButton::clicked,[=]()->void{
        emit SendOpe("/");
        qDebug()<<"输入/";
    });
    //归零
    connect(ui->Ac,&QPushButton::clicked,[=]()->void{
        ui->textEdit_Input->setText("");
        vec_IntNum_A.clear();
        vec_IntNum_B.clear();
        Fu_hao="";
        Sum=0;
        flag=0;
        number_a=0;
        number_b=0;
        a=0;
        b=0;
    });
}
void Dialog::ReadNum(int Num){
    if(sign==-1){
        ui->textEdit_Input->setText("");
        vec_IntNum_A.clear();
        vec_IntNum_B.clear();
        Fu_hao="";
        Sum=0;
        flag=0;
        number_a=0;
        number_b=0;
        a=0;
        b=0;
        sign = 0;
    }
    qDebug()<<"读取入数字";
    if(flag==0){    //还没有读取到运算符
        number_a++;
        switch (Num) {
        case 0:{
            vec_IntNum_A.push_back(0);
            if(vec_IntNum_A.empty()){
                ui->textEdit_Input->setText("0");
            }
            else {
                //ui->textEdit_Input->append("0");
                ui->textEdit_Input->insertPlainText("0");
            }
            break;
        }
        case 1:{
            vec_IntNum_A.push_back(1);
            if(vec_IntNum_A.empty()){
                ui->textEdit_Input->setText("1");
            }
            else {
                //ui->textEdit_Input->append("1");
                ui->textEdit_Input->insertPlainText("1");
            }
            break;
        }
        case 2:{
            vec_IntNum_A.push_back(2);
            if(vec_IntNum_A.empty()){
                ui->textEdit_Input->setText("2");
            }
            else {
                //ui->textEdit_Input->append("2");
                ui->textEdit_Input->insertPlainText("2");
            }
            break;
        }
        case 3:{
            vec_IntNum_A.push_back(3);
            if(vec_IntNum_A.empty()){
                ui->textEdit_Input->setText("3");
            }
            else {
                //ui->textEdit_Input->append("3");
                ui->textEdit_Input->insertPlainText("3");
            }
            break;
        }
        case 4:{
            vec_IntNum_A.push_back(4);
            if(vec_IntNum_A.empty()){
                ui->textEdit_Input->setText("4");
            }
            else {
                //ui->textEdit_Input->append("4");
                ui->textEdit_Input->insertPlainText("4");
            }
            break;
        }
        case 5:{
            vec_IntNum_A.push_back(5);
            if(vec_IntNum_A.empty()){
                ui->textEdit_Input->setText("5");
            }
            else {
                //ui->textEdit_Input->append("5");
                ui->textEdit_Input->insertPlainText("5");
            }
            break;
        }
        case 6:{
            vec_IntNum_A.push_back(6);
            if(vec_IntNum_A.empty()){
                ui->textEdit_Input->setText("6");
            }
            else {
                //ui->textEdit_Input->append("6");
                ui->textEdit_Input->insertPlainText("6");
            }
            break;
        }
        case 7:{
            vec_IntNum_A.push_back(7);
            if(vec_IntNum_A.empty()){
                ui->textEdit_Input->setText("7");
            }
            else {
                //ui->textEdit_Input->append("7");
                ui->textEdit_Input->insertPlainText("7");
            }
            break;
        }
        case 8:{
            vec_IntNum_A.push_back(8);
            if(vec_IntNum_A.empty()){
                ui->textEdit_Input->setText("8");
            }
            else {
                //ui->textEdit_Input->append("8");
                ui->textEdit_Input->insertPlainText("8");
            }
            break;
        }
        case 9:{
            vec_IntNum_A.push_back(9);
            if(vec_IntNum_A.empty()){
                ui->textEdit_Input->setText("9");
            }
            else {
                //ui->textEdit_Input->append("9");
                ui->textEdit_Input->insertPlainText("9");
            }
            break;
        }
        }
    }
    else if(flag != 0){ //已经读取到了运算符
        number_b++;
        switch (Num) {
        case 0:{
            vec_IntNum_B.push_back(0);
            if(vec_IntNum_B.empty()){
                ui->textEdit_Input->setText("0");
            }
            else {
                ui->textEdit_Input->insertPlainText("0");
            }
            break;
        }
        case 1:{
            vec_IntNum_B.push_back(1);
            if(vec_IntNum_B.empty()){
                ui->textEdit_Input->setText("1");
            }
            else {
                ui->textEdit_Input->insertPlainText("1");
            }
            break;
        }
        case 2:{
            vec_IntNum_B.push_back(2);
            if(vec_IntNum_B.empty()){
                ui->textEdit_Input->setText("2");
            }
            else {
                ui->textEdit_Input->insertPlainText("2");
            }
            break;
        }
        case 3:{
            vec_IntNum_B.push_back(3);
            if(vec_IntNum_B.empty()){
                ui->textEdit_Input->setText("3");
            }
            else {
                ui->textEdit_Input->insertPlainText("3");
            }
            break;
        }
        case 4:{
            vec_IntNum_B.push_back(4);
            if(vec_IntNum_B.empty()){
                ui->textEdit_Input->setText("4");
            }
            else {
                ui->textEdit_Input->insertPlainText("4");
            }
            break;
        }
        case 5:{
            vec_IntNum_B.push_back(5);
            if(vec_IntNum_B.empty()){
                ui->textEdit_Input->setText("5");
            }
            else {
                ui->textEdit_Input->insertPlainText("5");
            }
            break;
        }
        case 6:{
            vec_IntNum_B.push_back(6);
            if(vec_IntNum_B.empty()){
                ui->textEdit_Input->setText("6");
            }
            else {
                ui->textEdit_Input->insertPlainText("6");
            }
            break;
        }
        case 7:{
            vec_IntNum_B.push_back(7);
            if(vec_IntNum_B.empty()){
                ui->textEdit_Input->setText("7");
            }
            else {
                ui->textEdit_Input->insertPlainText("7");
            }
            break;
        }
        case 8:{
            vec_IntNum_B.push_back(8);
            if(vec_IntNum_B.empty()){
                ui->textEdit_Input->setText("8");
            }
            else {
                ui->textEdit_Input->insertPlainText("8");
            }
            break;
        }
        case 9:{
            vec_IntNum_B.push_back(9);
            if(vec_IntNum_B.empty()){
                ui->textEdit_Input->setText("9");
            }
            else {
                ui->textEdit_Input->insertPlainText("9");
            }
            break;
        }
        }
    }
}
void Dialog::ReadOpe(const QString &Ope){
    if(sign==-1){
        ui->textEdit_Input->setText("");
        vec_IntNum_A.clear();
        vec_IntNum_B.clear();
        Fu_hao="";
        Sum=0;
        flag=0;
        number_a=0;
        number_b=0;
        a=0;
        b=0;
        sign = 0;
    }
    flag++;
    if(Ope=="+"){
        Fu_hao=Ope;
        ui->textEdit_Input->insertPlainText(Ope);
        return;
    }
    else if(Ope=="-"){
        Fu_hao=Ope;
        ui->textEdit_Input->insertPlainText(Ope);
        return;
    }
    else if(Ope=="*"){
        Fu_hao=Ope;
        ui->textEdit_Input->insertPlainText(Ope);
        return;
    }
    else if(Ope=="/"){
        Fu_hao=Ope;
        ui->textEdit_Input->insertPlainText(Ope);
        return;
    }
}
void Dialog::SUM(){
    sign = -1;
    if(Fu_hao=="+"){
        qDebug()<<"+++";
        Separate_Sum();
        Sum=a+b;
        ui->textEdit_Input->insertPlainText(QString(" = %1 ").arg(Sum));
        return;
    }
    else if(Fu_hao=="-"){
        qDebug()<<"---";
        Separate_Sum();
        Sum=a-b;
        ui->textEdit_Input->insertPlainText(QString(" = %1 ").arg(Sum));
        return;
    }
    else if(Fu_hao=="*"){
        qDebug()<<"***";
        Separate_Sum();
        Sum=a*b;
        ui->textEdit_Input->insertPlainText(QString(" = %1 ").arg(Sum));
        return;
    }
    else if(Fu_hao=="/"){
        qDebug()<<"///";
        if(vec_IntNum_B.at(0)==0){
            ui->textEdit_Input->clear();
            ui->textEdit_Input->setText("Error");
            return ;
        }
        else{
            Separate_Sum();
            float Sum=(float)a/b;
            ui->textEdit_Input->insertPlainText(QString(" = %1 ").arg(Sum));
            return;
        }
    }
    else {
        return ;
    }
}
void Dialog::Separate_Sum(){
    for(auto it=vec_IntNum_A.begin();it!=vec_IntNum_A.end();it++){
        a=a*10+*it;
    }
    for(auto jt=vec_IntNum_B.begin();jt!=vec_IntNum_B.end();jt++){
        b=b*10+*jt;
    }
}
Dialog::~Dialog(){
    delete ui;
}

