#include "SeerHighlighterSettings.h"
#include <QtCore/QList>

SeerHighlighterSettings::SeerHighlighterSettings () {
}

SeerHighlighterSettings::SeerHighlighterSettings (const SeerHighlighterSettings& other) {

    *this = other;
}

SeerHighlighterSettings::~SeerHighlighterSettings () {
}

SeerHighlighterSettings& SeerHighlighterSettings::operator= (const SeerHighlighterSettings& rhs) {

    _formats = rhs._formats;

    return *this;
}

QStringList SeerHighlighterSettings::keys () const {

    QList<QString> keylist = _formats.keys();

    QStringList keys;

    for (int i=0; i<keylist.count(); i++) {
        keys.push_back(keylist[i]);
    }

    return keys;
}

bool SeerHighlighterSettings::has (const QString& name) const {

    return _formats.contains(name);
}

QTextCharFormat SeerHighlighterSettings::get (const QString& name) const {

    return _formats[name];
}

void SeerHighlighterSettings::add (const QString& name, QTextCharFormat& format) {

    _formats[name] = format;
}

int SeerHighlighterSettings::count () const {

    return _formats.size();
}

QStringList SeerHighlighterSettings::themeNames() {

    QStringList names;

    names << "light" << "dark";

    return names;
}

SeerHighlighterSettings SeerHighlighterSettings::populateForCPP (const QString& themeName) {

    if (themeName == "light") {
        return SeerHighlighterSettings::populateForCPP_light();
    }else if (themeName == "dark") {
        return SeerHighlighterSettings::populateForCPP_dark();
    }

    return SeerHighlighterSettings::populateForCPP_light();
}

SeerHighlighterSettings SeerHighlighterSettings::populateForCPP_light () {

    SeerHighlighterSettings cppSettings;

    QTextCharFormat f;

    f = QTextCharFormat();
    f.setFontWeight(QFont::Normal);
    f.setFontItalic(false);
    f.setForeground(QColor("#000000"));
    f.setBackground(QColor("#ffffff"));
    cppSettings.add("Text", f);

    f = QTextCharFormat();
    f.setFontWeight(QFont::Normal);
    f.setFontItalic(false);
    f.setForeground(QColor("#000000"));
    f.setBackground(QColor("#c0c0c0"));
    cppSettings.add("Margin", f);

    f = QTextCharFormat();
    f.setFontWeight(QFont::Bold);
    f.setFontItalic(false);
    f.setForeground(QColor("#800080"));
    f.setBackground(QColor("#ffffff"));
    cppSettings.add("Class", f);

    f = QTextCharFormat();
    f.setFontWeight(QFont::Normal);
    f.setFontItalic(false);
    f.setForeground(QColor("#008000"));
    f.setBackground(QColor("#ffffff"));
    cppSettings.add("Quotation", f);

    f = QTextCharFormat();
    f.setFontWeight(QFont::Normal);
    f.setFontItalic(true);
    f.setForeground(QColor("#0000ff"));
    f.setBackground(QColor("#ffffff"));
    cppSettings.add("Function", f);

    f = QTextCharFormat();
    f.setFontWeight(QFont::Normal);
    f.setFontItalic(false);
    f.setForeground(QColor("#ff0000"));
    f.setBackground(QColor("#ffffff"));
    cppSettings.add("Comment", f);

    f = QTextCharFormat();
    f.setFontWeight(QFont::Normal);
    f.setFontItalic(false);
    f.setForeground(QColor("#ff0000"));
    f.setBackground(QColor("#ffffff"));
    cppSettings.add("Multiline Comment", f);

    f = QTextCharFormat();
    f.setFontWeight(QFont::Bold);
    f.setFontItalic(false);
    f.setForeground(QColor("#000080"));
    f.setBackground(QColor("#ffffff"));
    cppSettings.add("Keyword", f);

    f = QTextCharFormat();
    f.setFontWeight(QFont::Normal);
    f.setFontItalic(false);
    f.setForeground(QColor("#000000"));
    f.setBackground(QColor("#ffff99"));
    cppSettings.add("Current Line", f);

    f = QTextCharFormat();
    f.setFontWeight(QFont::Normal);
    f.setFontItalic(false);
    f.setForeground(QColor("#000000"));
    f.setBackground(QColor("#c0c0c0"));
    cppSettings.add("Match", f);

    return cppSettings;
}

SeerHighlighterSettings SeerHighlighterSettings::populateForCPP_dark () {

    SeerHighlighterSettings cppSettings;

    QTextCharFormat f;

    f = QTextCharFormat();
    f.setFontWeight(QFont::Normal);
    f.setFontItalic(false);
    f.setForeground(QColor("#b2b2b2"));
    f.setBackground(QColor("#232629"));
    cppSettings.add("Text", f);

    f = QTextCharFormat();
    f.setFontWeight(QFont::Normal);
    f.setFontItalic(false);
    f.setForeground(QColor("#7c7f81"));
    f.setBackground(QColor("#31363b"));
    cppSettings.add("Margin", f);

    f = QTextCharFormat();
    f.setFontWeight(QFont::Bold);
    f.setFontItalic(false);
    f.setForeground(QColor("#32ae48"));
    f.setBackground(QColor("#232629"));
    cppSettings.add("Class", f);

    f = QTextCharFormat();
    f.setFontWeight(QFont::Normal);
    f.setFontItalic(false);
    f.setForeground(QColor("#f453de"));
    f.setBackground(QColor("#232629"));
    cppSettings.add("Quotation", f);

    f = QTextCharFormat();
    f.setFontWeight(QFont::Normal);
    f.setFontItalic(true);
    f.setForeground(QColor("#736a59"));
    f.setBackground(QColor("#232629"));
    cppSettings.add("Function", f);

    f = QTextCharFormat();
    f.setFontWeight(QFont::Normal);
    f.setFontItalic(false);
    f.setForeground(QColor("#52f8f8"));
    f.setBackground(QColor("#232629"));
    cppSettings.add("Comment", f);

    f = QTextCharFormat();
    f.setFontWeight(QFont::Normal);
    f.setFontItalic(false);
    f.setForeground(QColor("#52f8f8"));
    f.setBackground(QColor("#232629"));
    cppSettings.add("Multiline Comment", f);

    f = QTextCharFormat();
    f.setFontWeight(QFont::Bold);
    f.setFontItalic(false);
    f.setForeground(QColor("#d9f743"));
    f.setBackground(QColor("#232629"));
    cppSettings.add("Keyword", f);

    f = QTextCharFormat();
    f.setFontWeight(QFont::Normal);
    f.setFontItalic(false);
    f.setForeground(QColor("#c7fa54"));
    f.setBackground(QColor("#8ea82f"));
    cppSettings.add("Current Line", f);

    f = QTextCharFormat();
    f.setFontWeight(QFont::Normal);
    f.setFontItalic(false);
    f.setForeground(QColor("#000000"));
    f.setBackground(QColor("#737373"));
    cppSettings.add("Match", f);

    return cppSettings;
}

