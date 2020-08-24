std::ofstream outf{ "Sample.dat" };
outf << "This is line 1" << '\n';
outf << "This is line 2" << '\n';
outf.close(); // explicitly close the file

// Oops, we forgot something
outf.open("Sample.dat", std::ios::app);
outf << "This is line 3\n";
outf.close();
