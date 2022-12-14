void showAdminView() {
	printf("Enter [1] if you want to see the administrator tools.\n");
	printf("Enter [2] if you want to see your profile.\n");
	printf("Enter [3] if you want to log out.\n");
    printf("Enter here: ");
	scanf("%i", &selectedView);
	getchar();

    if (selectedView == 1) {
        show(ADMINTOOLS_VIEW);
    } else if (selectedView == 2) {
        show(PROFILE_VIEW);
    } else if (selectedView == 3) {
        show(LOGOUT_VIEW);
    } else {
        popInvalidViewMessage();
        redirectTo(MAIN_VIEW);
    }
}