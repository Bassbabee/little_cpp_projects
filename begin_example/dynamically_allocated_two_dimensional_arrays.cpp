int main()
{
	// Creating array
	int **array = new int*[10]; // allocate an array of 10 int pointers — these are our rows
	for (int count = 0; count < 10; ++count)
    	array[count] = new int[5]; // these are our columns


	// Deleting array
	for (int count = 0; count < 10; ++count)
	    delete[] array[count];
	delete[] array; // this needs to be done last


	return 0;
}
