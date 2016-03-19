#ifndef GIT_EVENTS_H
#define GIT_EVENTS_H

/// a wxCommandEvent that takes ownership of the clientData
#include <wx/event.h>
#include "GitLiteExports.h"

/**
 * @class GitLiteEvent
 * @brief base GitLite event
 */
class WXDLLIMPEXP_LIBGIT GitLiteEvent : public wxCommandEvent
{
    wxString m_message;

public:
    GitLiteEvent(wxEventType commandType = wxEVT_NULL, int winid = 0);
    GitLiteEvent(const GitLiteEvent& src);
    GitLiteEvent& operator=(const GitLiteEvent& src);
    virtual ~GitLiteEvent();
    virtual wxEvent* Clone() const { return new GitLiteEvent(*this); }
    void SetMessage(const wxString& message) { this->m_message = message; }
    const wxString& GetMessage() const { return m_message; }
};

typedef void (wxEvtHandler::*GitLiteEventFunction)(GitLiteEvent&);
#define GitLiteEventHandler(func) wxEVENT_HANDLER_CAST(GitLiteEventFunction, func)

/**
 * @class GitLiteCloneEvent
 * @brief GitLite progress event
 */
class WXDLLIMPEXP_LIBGIT GitLiteCloneEvent : public GitLiteEvent
{
protected:
    int m_total;
    int m_current;
    bool m_cancelled;
    bool m_error;

public:
    GitLiteCloneEvent(wxEventType commandType = wxEVT_NULL, int winid = 0);
    GitLiteCloneEvent(const GitLiteCloneEvent& src);
    GitLiteCloneEvent& operator=(const GitLiteCloneEvent& src);
    virtual ~GitLiteCloneEvent();
    virtual wxEvent* Clone() const { return new GitLiteCloneEvent(*this); }
    void SetCancelled(bool cancelled) { this->m_cancelled = cancelled; }
    void SetCurrent(int current) { this->m_current = current; }
    void SetTotal(int total) { this->m_total = total; }
    bool IsCancelled() const { return m_cancelled; }
    int GetCurrent() const { return m_current; }
    int GetTotal() const { return m_total; }
    bool IsDone() const { return m_total == m_current; }
    void SetError(bool error) { this->m_error = error; }
    bool IsError() const { return m_error; }
};

typedef void (wxEvtHandler::*GitLiteProgressEventFunction)(GitLiteCloneEvent&);
#define GitLiteProgressEventHandler(func) wxEVENT_HANDLER_CAST(GitLiteProgressEventFunction, func)

//========================================
// Define the GIT events
//========================================

wxDECLARE_EXPORTED_EVENT(WXDLLIMPEXP_LIBGIT, wxEVT_GIT_CLONE_PROGRESS, GitLiteCloneEvent);
wxDECLARE_EXPORTED_EVENT(WXDLLIMPEXP_LIBGIT, wxEVT_GIT_CLONE_ERROR, GitLiteCloneEvent);
wxDECLARE_EXPORTED_EVENT(WXDLLIMPEXP_LIBGIT, wxEVT_GIT_CLONE_COMPLETED, GitLiteCloneEvent);

#endif // GIT_EVENTS_H
