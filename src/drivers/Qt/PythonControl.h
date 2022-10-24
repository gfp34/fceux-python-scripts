// PythonControl.h
//

#pragma once

#include <stdio.h>
#include <stdarg.h>

#include <QWidget>
#include <QDialog>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QComboBox>
#include <QCheckBox>
#include <QPushButton>
#include <QLabel>
#include <QFrame>
#include <QGroupBox>
#include <QLineEdit>
#include <QTextEdit>

#include "Qt/main.h"

class PythonControlDialog_t : public QDialog
{
	Q_OBJECT

public:
	PythonControlDialog_t(QWidget *parent = 0);
	~PythonControlDialog_t(void);

	void refreshState(void);

protected:
	void closeEvent(QCloseEvent *bar);
	void openPythonKillMessageBox(void);

	QTimer *periodicTimer;
	QLineEdit *scriptPath;
	QLineEdit *scriptArgs;
	QPushButton *browseButton;
	QPushButton *stopButton;
	QPushButton *startButton;
	QTextEdit *pythonOutput;

private:
public slots:
	void closeWindow(void);
private slots:
	void updatePeriodic(void);
	void openPythonScriptFile(void);
	void startPythonScript(void);
	void stopPythonScript(void);
};

// Formatted print
#ifdef WIN32
int PythonPrintfToWindowConsole(_In_z_ _Printf_format_string_ const char *format, ...);
#elif __linux__
#ifdef __THROWNL
int PythonPrintfToWindowConsole(const char *__restrict format, ...)
	__THROWNL __attribute__((__format__(__printf__, 1, 2)));
#else
int PythonPrintfToWindowConsole(const char *__restrict format, ...) throw() __attribute__((__format__(__printf__, 1, 2)));
#endif
#else
int PythonPrintfToWindowConsole(const char *__restrict format, ...) throw();
#endif

void PythonPrintToWindowConsole(intptr_t hDlgAsInt, const char *str);

int PythonKillMessageBox(void);
