#include "AboutUs.h"

System::Void gui::AboutUs::TawfiqGithub_Click(System::Object^ sender, System::EventArgs^ e)
{
    System::Diagnostics::Process::Start("https://github.com/AbdulrahmanMohamedTawfik");
    return System::Void();
}

System::Void gui::AboutUs::ElDemerdashGithub_Click(System::Object^ sender, System::EventArgs^ e)
{
    System::Diagnostics::Process::Start("https://github.com/Abdelrahman-Eldemerdash");
    return System::Void();
}
