//////////////////////////////////////////////////////////////////////
// This file was auto-generated by codelite's wxCrafter Plugin
// wxCrafter project file: wxcrafter.wxcp
// Do not modify this file by hand!
//////////////////////////////////////////////////////////////////////

#ifndef GITLITE_GITLITE_WXCRAFTER_BASE_CLASSES_H
#define GITLITE_GITLITE_WXCRAFTER_BASE_CLASSES_H

#include <wx/settings.h>
#include <wx/xrc/xmlres.h>
#include <wx/xrc/xh_bmp.h>
#include <wx/frame.h>
#include <wx/iconbndl.h>
#include <wx/artprov.h>
#include <wx/sizer.h>
#include <wx/panel.h>
#include <wx/menu.h>
#include <wx/toolbar.h>
#include <wx/dialog.h>
#include <wx/stattext.h>
#include <wx/textctrl.h>
#include <wx/button.h>
#include <wx/filepicker.h>
#include <wx/checkbox.h>
#if wxVERSION_NUMBER >= 2900
#include <wx/persist.h>
#include <wx/persist/toplevel.h>
#include <wx/persist/bookctrl.h>
#include <wx/persist/treebook.h>
#endif

class MainFrameBaseClass : public wxFrame
{
public:
    enum {
        TB_ID_COPY = 10001,
    };
protected:
    wxPanel* m_mainPanel;
    wxMenuBar* m_menuBar;
    wxMenu* m_name6;
    wxMenuItem* m_menuItem7;
    wxMenu* m_name8;
    wxMenuItem* m_menuItem9;
    wxToolBar* m_mainToolbar;

protected:
    virtual void OnExit(wxCommandEvent& event) { event.Skip(); }
    virtual void OnAbout(wxCommandEvent& event) { event.Skip(); }
    virtual void OnClone(wxCommandEvent& event) { event.Skip(); }

public:
    wxPanel* GetMainPanel() { return m_mainPanel; }
    wxMenuBar* GetMenuBar() { return m_menuBar; }
    wxToolBar* GetMainToolbar() { return m_mainToolbar; }
    MainFrameBaseClass(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("My Frame"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxCAPTION|wxRESIZE_BORDER|wxMAXIMIZE_BOX|wxMINIMIZE_BOX|wxSYSTEM_MENU|wxCLOSE_BOX);
    virtual ~MainFrameBaseClass();
};


class UserNamePasswordDlgBase : public wxDialog
{
protected:
    wxStaticText* m_staticText25;
    wxTextCtrl* m_textCtrlUsername;
    wxStaticText* m_staticText29;
    wxTextCtrl* m_textCtrlPassword;
    wxStdDialogButtonSizer* m_stdBtnSizer17;
    wxButton* m_button19;
    wxButton* m_button21;

protected:

public:
    wxStaticText* GetStaticText25() { return m_staticText25; }
    wxTextCtrl* GetTextCtrlUsername() { return m_textCtrlUsername; }
    wxStaticText* GetStaticText29() { return m_staticText29; }
    wxTextCtrl* GetTextCtrlPassword() { return m_textCtrlPassword; }
    UserNamePasswordDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Username/Password"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~UserNamePasswordDlgBase();
};


class SSHKeysDlgBase : public wxDialog
{
protected:
    wxStaticText* m_staticText47;
    wxFilePickerCtrl* m_filePickerPrivateKey;
    wxStaticText* m_staticText51;
    wxFilePickerCtrl* m_filePickerPublicKey;
    wxStaticText* m_staticText55;
    wxTextCtrl* m_textCtrlPasphrase;
    wxStaticText* m_staticText59;
    wxTextCtrl* m_textCtrlRemoteUsername;
    wxCheckBox* m_checkBoxRemember;
    wxStdDialogButtonSizer* m_stdBtnSizer39;
    wxButton* m_button41;
    wxButton* m_button43;

protected:

public:
    wxStaticText* GetStaticText47() { return m_staticText47; }
    wxFilePickerCtrl* GetFilePickerPrivateKey() { return m_filePickerPrivateKey; }
    wxStaticText* GetStaticText51() { return m_staticText51; }
    wxFilePickerCtrl* GetFilePickerPublicKey() { return m_filePickerPublicKey; }
    wxStaticText* GetStaticText55() { return m_staticText55; }
    wxTextCtrl* GetTextCtrlPasphrase() { return m_textCtrlPasphrase; }
    wxStaticText* GetStaticText59() { return m_staticText59; }
    wxTextCtrl* GetTextCtrlRemoteUsername() { return m_textCtrlRemoteUsername; }
    wxCheckBox* GetCheckBoxRemember() { return m_checkBoxRemember; }
    SSHKeysDlgBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("SSH Keys"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~SSHKeysDlgBase();
};


class GitCloneDialogBase : public wxDialog
{
protected:
    wxStaticText* m_staticText77;
    wxTextCtrl* m_textCtrlURL;
    wxStaticText* m_staticText81;
    wxDirPickerCtrl* m_dirPicker;
    wxStdDialogButtonSizer* m_stdBtnSizer69;
    wxButton* m_button71;
    wxButton* m_button73;

protected:

public:
    wxStaticText* GetStaticText77() { return m_staticText77; }
    wxTextCtrl* GetTextCtrlURL() { return m_textCtrlURL; }
    wxStaticText* GetStaticText81() { return m_staticText81; }
    wxDirPickerCtrl* GetDirPicker() { return m_dirPicker; }
    GitCloneDialogBase(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("Git Clone"), const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxSize(-1,-1), long style = wxDEFAULT_DIALOG_STYLE|wxRESIZE_BORDER);
    virtual ~GitCloneDialogBase();
};

#endif
