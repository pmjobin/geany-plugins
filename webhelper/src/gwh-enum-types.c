
/* Generated data (by glib-mkenums) */

#include "gwh-enum-types.h"

#include <glib/gi18n.h>

/* enumerations from "gwh-browser.h" */
GType
gwh_browser_position_get_type (void)
{
  static GType etype = 0;
  if (G_UNLIKELY(etype == 0)) {
    static const GEnumValue values[] = {
      { GWH_BROWSER_POSITION_MESSAGE_WINDOW, "GWH_BROWSER_POSITION_MESSAGE_WINDOW", N_("message-window") },
      { GWH_BROWSER_POSITION_SIDEBAR, "GWH_BROWSER_POSITION_SIDEBAR", N_("sidebar") },
      { GWH_BROWSER_POSITION_SEPARATE_WINDOW, "GWH_BROWSER_POSITION_SEPARATE_WINDOW", N_("separate-window") },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static (g_intern_static_string ("GwhBrowserPosition"), values);
  }
  return etype;
}

/* enumerations from "gwh-settings.h" */
GType
gwh_settings_notify_flags_get_type (void)
{
  static GType etype = 0;
  if (G_UNLIKELY(etype == 0)) {
    static const GFlagsValue values[] = {
      { GWH_SETTINGS_NOTIFY_NONE, "GWH_SETTINGS_NOTIFY_NONE", N_("none") },
      { GWH_SETTINGS_NOTIFY_ON_CONNEXION, "GWH_SETTINGS_NOTIFY_ON_CONNEXION", N_("on-connexion") },
      { 0, NULL, NULL }
    };
    etype = g_flags_register_static (g_intern_static_string ("GwhSettingsNotifyFlags"), values);
  }
  return etype;
}

/* enumerations from "gwh-utils.h" */
GType
gwh_window_type_get_type (void)
{
  static GType etype = 0;
  if (G_UNLIKELY(etype == 0)) {
    static const GEnumValue values[] = {
      { GWH_WINDOW_TYPE_NORMAL, "GWH_WINDOW_TYPE_NORMAL", N_("normal") },
      { GWH_WINDOW_TYPE_UTILITY, "GWH_WINDOW_TYPE_UTILITY", N_("utility") },
      { 0, NULL, NULL }
    };
    etype = g_enum_register_static (g_intern_static_string ("GwhWindowType"), values);
  }
  return etype;
}


/* Generated data ends here */

