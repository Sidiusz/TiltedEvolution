#include <NgLoadHandler.h>

namespace TiltedPhoques
{
    void NgLoadHandler::OnLoadStart(CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame, TransitionType transition_type)
    {
        if (frame->IsMain() && transition_type == TT_EXPLICIT)
        {
            m_ready = false;
        }
    }

    void NgLoadHandler::OnLoadEnd(CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame, int httpStatusCode)
    {
        if (frame->IsMain())
        {
            m_ready = true;
        }
    }

    void NgLoadHandler::OnLoadError(CefRefPtr<CefBrowser> browser, CefRefPtr<CefFrame> frame, ErrorCode errorCode, const CefString& errorText, const CefString& failedUrl)
    {
    }
}