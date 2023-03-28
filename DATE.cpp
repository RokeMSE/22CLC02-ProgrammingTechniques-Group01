DATE getDate (string chr) {
    DATE date;
    // chr: mm/dd/yyyy
    // creat a list to choose: day (according to month, 1-31), month (1 to 12), year (1950 to current year)
    date.month = stoi(chr.substr(0,2));
    date.day = stoi(chr.substr(3,2));
    date.year = stoi(chr.substr(6,4));
    return date;
}
