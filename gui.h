#ifndef GUI_H
#define GUI_H
#include <QApplication>
#include <QPushButton>
#include <QTextEdit>
#include <QVBoxLayout>
#include <QWidget>
#include <iostream>

// Add a text in the window.
QTextEdit *add_text(QWidget *parent, const char *content, int height,
                    int width);

// Add a button in the window.
QPushButton *add_button(QWidget *parent, const char *content, int height,
                        int width);

#endif