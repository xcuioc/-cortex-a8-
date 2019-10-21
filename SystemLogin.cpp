#include "SystemLogin.h"
#include "ui_SystemLogin.h"
//#include<QDialog>
#include<QMessageBox>

SystemLogin::SystemLogin(QWidget *parent) :    
    ui(new Ui::SystemLogin)
{
    setWindowFlags(Qt::WindowCloseButtonHint);//设置窗口只有一个关闭按钮
    setAttribute(Qt::WA_ShowModal, true);//设置为模态窗口

    ui->setupUi(this);
    ui->ted_pwd->setEchoMode(QLineEdit::Password);

   QPalette palette(this->palette());
   palette.setColor(QPalette::Background, Qt::white);
   this->setPalette(palette);
}

SystemLogin::~SystemLogin()
{
    delete ui;
}

void SystemLogin::on_ptn_login_clicked()
{
    if(ui->ted_user->text() == "admin" && ui->ted_pwd->text() == "123456")//在这里修改超级管理员账号和密码
    {
        sys =new SystemManage();
        sys->show();
        this->hide();
    }
    else if(ui->ted_user->text() == "")
    {
         QMessageBox::warning(NULL,"提示","用户名不能为空！");
    }
    else if(ui->ted_pwd->text() == "")
    {
         QMessageBox::warning(NULL,"提示","密码不能为空！");
    }
    else
    {
         QMessageBox::warning(NULL,"提示","用户名或密码错误！");
    }
}

void SystemLogin::on_ptn_reset_clicked()
{
    ui->ted_user->clear();
    ui->ted_pwd->clear();

}
