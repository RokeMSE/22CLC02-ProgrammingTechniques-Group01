#include "Login.h"

#include "MenuStaff.h"
#include "MenuStudent.h"

#include "Add1Course.h"
#include "Add1StuToClass.h"
#include "Add1StuToCourse.h"

#include "ImpScoreOfCourse.h"

#include "RemoveStuFromCourse.h"

#include "UpdateResult.h"

#include "ViewAListStudentInACourse.h"
#include "ViewListCourses.h"
#include "ViewListCoursesOfStu.h"
#include "ViewScoreOf1Stu.h"

System::Void CMS::MenuStaff::btn_logout_Click(System::Object^ sender, System::EventArgs^ e) {
	if (latestCheckRememberLogin) {
		latestUsername = g_currentStaff->user.username;
		latestPassword = g_currentStaff->user.password;
	}
	else latestUsername = latestPassword = "";
	g_currentStudent = nullptr;
	g_currentStaff = nullptr;
	this->Close();
	Login^ form = gcnew Login();
	form->Show();
}
 
System::Void CMS::MenuStudent::btn_logout_Click(System::Object^ sender, System::EventArgs^ e) {
	if (latestCheckRememberLogin) {
		latestUsername = g_currentStudent->user.username;
		latestPassword = g_currentStudent->user.password;
	}
	else latestUsername = latestPassword = "";
	g_currentStudent = nullptr;
	g_currentStaff = nullptr;
	this->Close();
	Login^ form = gcnew Login();
	form->Show();
}

System::Void CMS::Add1Course::btn_logout_Click(System::Object^ sender, System::EventArgs^ e) {
	if (latestCheckRememberLogin) {
		latestUsername = g_currentStaff->user.username;
		latestPassword = g_currentStaff->user.password;
	}
	else latestUsername = latestPassword = "";
	g_currentStudent = nullptr;
	g_currentStaff = nullptr;
	if (this->sourceForm) this->sourceForm->Close();
	if (this->loginForm) this->loginForm->Close();
	this->Close();
	Login^ form = gcnew Login();
	form->Show();
}

System::Void CMS::Add1StuToClass::btn_logout_Click(System::Object^ sender, System::EventArgs^ e) {
	if (latestCheckRememberLogin) {
		latestUsername = g_currentStaff->user.username;
		latestPassword = g_currentStaff->user.password;
	}
	else latestUsername = latestPassword = "";
	g_currentStudent = nullptr;
	g_currentStaff = nullptr;
	if (this->sourceForm) this->sourceForm->Close();
	if (this->loginForm) this->loginForm->Close();
	this->Close();
	Login^ form = gcnew Login();
	form->Show();
}

System::Void CMS::Add1StuToCourse::btn_logout_Click(System::Object^ sender, System::EventArgs^ e) {
	if (latestCheckRememberLogin) {
		latestUsername = g_currentStaff->user.username;
		latestPassword = g_currentStaff->user.password;
	}
	else latestUsername = latestPassword = "";
	g_currentStudent = nullptr;
	g_currentStaff = nullptr;
	if (this->sourceForm) this->sourceForm->Close();
	if (this->loginForm) this->loginForm->Close();
	this->Close();
	Login^ form = gcnew Login();
	form->Show();
}

System::Void CMS::ImpScoreOfCourse::btn_logout_Click(System::Object^ sender, System::EventArgs^ e) {
	if (latestCheckRememberLogin) {
		latestUsername = g_currentStaff->user.username;
		latestPassword = g_currentStaff->user.password;
	}
	else latestUsername = latestPassword = "";
	g_currentStudent = nullptr;
	g_currentStaff = nullptr;
	if (this->sourceForm) this->sourceForm->Close();
	if (this->loginForm) this->loginForm->Close();
	this->Close();
	Login^ form = gcnew Login();
	form->Show();
}

System::Void CMS::RemoveStuFromCourse::btn_logout_Click(System::Object^ sender, System::EventArgs^ e) {
	if (latestCheckRememberLogin) {
		latestUsername = g_currentStaff->user.username;
		latestPassword = g_currentStaff->user.password;
	}
	else latestUsername = latestPassword = "";
	g_currentStudent = nullptr;
	g_currentStaff = nullptr;
	if (this->sourceForm) this->sourceForm->Close();
	if (this->loginForm) this->loginForm->Close();
	this->Close();
	Login^ form = gcnew Login();
	form->Show();
}

System::Void CMS::UpdateResult::btn_logout_Click(System::Object^ sender, System::EventArgs^ e) {
	if (latestCheckRememberLogin) {
		latestUsername = g_currentStaff->user.username;
		latestPassword = g_currentStaff->user.password;
	}
	else latestUsername = latestPassword = "";
	g_currentStudent = nullptr;
	g_currentStaff = nullptr;
	if (this->sourceForm) this->sourceForm->Close();
	if (this->loginForm) this->loginForm->Close();
	this->Close();
	Login^ form = gcnew Login();
	form->Show();
}

System::Void CMS::ViewAListStudentInACourse::btn_logout_Click(System::Object^ sender, System::EventArgs^ e) {
	if (latestCheckRememberLogin) {
		latestUsername = g_currentStaff->user.username;
		latestPassword = g_currentStaff->user.password;
	}
	else latestUsername = latestPassword = "";
	g_currentStudent = nullptr;
	g_currentStaff = nullptr;
	if (this->sourceForm) this->sourceForm->Close();
	if (this->loginForm) this->loginForm->Close();
	this->Close();
	Login^ form = gcnew Login();
	form->Show();
}

System::Void CMS::ViewListCourses::btn_logout_Click(System::Object^ sender, System::EventArgs^ e) {
	if (latestCheckRememberLogin) {
		latestUsername = g_currentStaff->user.username;
		latestPassword = g_currentStaff->user.password;
	}
	else latestUsername = latestPassword = "";
	g_currentStudent = nullptr;
	g_currentStaff = nullptr;
	if (this->sourceForm) this->sourceForm->Close();
	if (this->loginForm) this->loginForm->Close();
	this->Close();
	Login^ form = gcnew Login();
	form->Show();
}

System::Void CMS::ViewListCoursesOfStu::btn_logout_Click(System::Object^ sender, System::EventArgs^ e) {
	if (latestCheckRememberLogin) {
		latestUsername = g_currentStudent->user.username;
		latestPassword = g_currentStudent->user.password;
	}
	else latestUsername = latestPassword = "";
	g_currentStudent = nullptr;
	g_currentStaff = nullptr;
	if (this->sourceForm) this->sourceForm->Close();
	if (this->loginForm) this->loginForm->Close();
	this->Close();
	Login^ form = gcnew Login();
	form->Show();
}

System::Void CMS::ViewScoreOf1Stu::btn_logout_Click(System::Object^ sender, System::EventArgs^ e) {
	if (latestCheckRememberLogin) {
		latestUsername = g_currentStudent->user.username;
		latestPassword = g_currentStudent->user.password;
	}
	else latestUsername = latestPassword = "";
	g_currentStudent = nullptr;
	g_currentStaff = nullptr;
	if (this->sourceForm) this->sourceForm->Close();
	if (this->loginForm) this->loginForm->Close();
	this->Close();
	Login^ form = gcnew Login();
	form->Show();
}