void updateUser() {
    string uname;
    cout << "Enter username to update: "; getline(cin, uname);

    ifstream in("users.txt");
    ofstream out("temp.txt");
    string line;
    bool found = false;

    while (getline(in, line)) {
        stringstream ss(line);
        string u, name, desg, dept, status;
        getline(ss, u, ',');
        getline(ss, name, ',');
        getline(ss, desg, ',');
        getline(ss, dept, ',');
        getline(ss, status);

        if (u == uname) {
            found = true;
            cout << "Enter new name: "; getline(cin, name);
            cout << "Enter new designation: "; getline(cin, desg);
            cout << "Enter new department: "; getline(cin, dept);
        }
        out << u << "," << name << "," << desg << "," << dept << "," << status << "\n";
    }

    in.close();
    out.close();
    remove("users.txt");
    rename("temp.txt", "users.txt");

    if (found)
        cout << "User updated.\n";
    else
        cout << "User not found.\n";
}