int controller_loadFromText(char* path , LinkedList* pArrayListEmployee);//Listo

int controller_loadFromBinary(char* path , LinkedList* pArrayListEmployee);//Listo

int controller_addEmployee(LinkedList* pArrayListEmploye);

int controller_editEmployee(LinkedList* pArrayListEmployee);

int controller_removeEmployee(LinkedList* pArrayListEmployee);//Listo

int controller_ListEmployee(LinkedList* pArrayListEmployee);

int controller_sortEmployee(LinkedList* pArrayListEmployee);

int controller_saveAsText(char* path , LinkedList* pArrayListEmployee);

int controller_saveAsBinary(char* path , LinkedList* pArrayListEmployee);

int buscarId(LinkedList*);

