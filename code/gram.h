#ifndef GRAM_H_INCLUDED
#define GRAM_H_INCLUDED

#define MAX_PARA_COUNT 100
#include <iostream>
#include <fstream>

#include <map>
#include <vector>

using namespace std;

class Item;
class FuncItem;
class VarItem;

typedef map<string, FuncItem*> FUNC_MAP;
typedef map<string, VarItem*> VAR_MAP;

extern VAR_MAP global_vars;
extern FUNC_MAP funcs;

bool is_local_var(string funcname, string name);
string gram_main(string);
VarItem* get_global_var(string name);
FuncItem* get_func(string name);

#endif // GRAM_H_INCLUDED
