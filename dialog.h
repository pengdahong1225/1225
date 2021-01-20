#ifndef DIALOG_H
#define DIALOG_H

#include <QDialog>
#include<vector>
using namespace std;

namespace Ui {
class Dialog;
}

class Dialog : public QDialog
{
    Q_OBJECT
public:
    explicit Dialog(QWidget *parent = nullptr);
    ~Dialog();
    void Separate_Sum();
signals:
    void SendNum(int Num);
    void SendOpe(const QString &Ope);
public slots:
    void ReadNum(int Num);
    void ReadOpe(const QString &Ope);
    void SUM();
private:
    Ui::Dialog *ui;
    vector<int> vec_IntNum_A;
    vector<int> vec_IntNum_B;
    //vector<QString> vec_String;
    QString Fu_hao;
    int Sum = 0;
    int number_a = 0;//数字位数
    int number_b = 0;
    int flag = 0;
    int a=0,b=0;
};

#endif // DIALOG_H
