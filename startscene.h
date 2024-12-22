#ifndef STARTSCENE_H
#define STARTSCENE_H

#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
#include <QCoreApplication>
#include <QtSql>


class startscene: public QWidget{
    Q_OBJECT

public:
    explicit startscene(QWidget *parent = nullptr);
signals:
    void showMenuWindow();

public slots:
    void login();
    void registerAcc();
    int getScore(const QString &name);
    void updateScore(const QString &name, int score);
    void setBackgroundImage(const QString &imagePath);

private:
    void createDatabase();
    void connectToDatabase();
    QLineEdit *usernameLineEdit;
    QLineEdit *passwordLineEdit;
};

#endif // STARTSCENE_H
