#pragma once

#include "Eleve.hpp"
#include "Note.hpp"
#include <string>
#include <vector>

void beginProgram(std::filesystem::path const &dataPath);

std::string toLower(const std::string& str);

std::string toUpper(const std::string & str);

std::vector<std::string> listMatiere(const Eleve &student, std::filesystem::path const &dataPath);

int getNoteNumberRegex(const std::string& fileName);

std::vector<Note>listNoteOfMatiere(const Eleve &student, const std::string &matiere, std::filesystem::path const &dataPath);

double truncateTo2Digits(double value);

void menu(const Eleve &student, std::filesystem::path const &dataPath);

void addMatiere(const Eleve &student, std::filesystem::path const &dataPath);

void addNoteOfMatiere(const Eleve &student, const std::string &matiere, std::filesystem::path const &dataPath);

void modifyNoteofMatiere(const Eleve &student, Note &note, int niemeNote, std::filesystem::path const &dataPath);

void deleteNoteofMatiere(const Eleve &student, const Note &note, int niemeNote, std::filesystem::path const &dataPath);

double meanOfMatiere(const Eleve &student, const std::string &matiere, std::filesystem::path const &dataPath);

double meanofStudent(const Eleve &student, std::filesystem::path const &dataPath);

void infoOfStudent(const Eleve &student, std::filesystem::path const &dataPath);

void endProgram(const Eleve &student);

std::string filesStudent(const std::string &idUser, std::filesystem::path const &dataPath);

Eleve createStudent(std::filesystem::path const &dataPath);

bool connexionStudent(std::array<std::string, 5> &infoStudents, std::filesystem::path const &dataPath);

void try_again_connexion(std::array<std::string, 5> &infoStudents, std::filesystem::path const &dataPath);

void entryErrorForInt();

std::vector<Eleve> listStudent(std::filesystem::path const &dataPath);

void annuler(const Eleve &student, std::filesystem::path const &dataPath);
