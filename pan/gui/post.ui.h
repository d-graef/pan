// "      <menuitem action='wrapselected' />\n"  doesnt exist yet, so deactivated for now....
const char * fallback_post_ui =
"<ui>\n"
"  <menubar name='post'>\n"
"    <menu action='file-menu'>\n"
"      <menuitem action='post-article' />\n"
"      <menuitem action ='post-and-save-articles'  />\n"
"      <separator />\n"
"      <menuitem action='save-draft' />\n"
"      <menuitem action='open-draft' />\n"
"      <separator />\n"
"      <menuitem action='close' />\n"
"    </menu>\n"
"    <menu action='edit-menu'>\n"
"      <menuitem action='cut' />\n"
"      <menuitem action='copy' />\n"
"      <menuitem action='paste' />\n"
"      <menuitem action='rot13' />\n"
"      <separator />\n"
"      <menuitem action='set-encoding' />\n"
"      <menuitem action='set-charset' />\n"
"      <menuitem action='remember-charset' />\n"
"      <separator />\n"
"      <menuitem action='master-reply' />\n"
"      <separator />\n"
#ifdef HAVE_GMIME_CRYPTO
"      <menuitem action='gpg-encrypt' />\n"
"      <menuitem action='gpg-sign' />\n"
"      <separator />\n"
#endif
"      <menuitem action='run-editor' />\n"
"      <menuitem action='always-run-editor' />\n"
"      <separator />\n"
"      <menuitem action='wrap' />\n"
"      <menuitem action='spellcheck' />\n"
"      <separator />\n"
"      <menuitem action='manage-profiles' />\n"
"    </menu>\n"
"  </menubar>\n"
"\n"
"  <toolbar name='post-toolbar'>\n"
"    <toolitem action='post-article' />\n"
"    <toolitem action='post-and-save-articles' />\n"
"    <separator />\n"
"    <toolitem action='save-draft' />\n"
"    <toolitem action='open-draft' />\n"
"    <separator />\n"
"    <toolitem action='wrap' />\n"
"    <separator />\n"
"    <toolitem action='rot13' />\n"
"    <toolitem action='run-editor' />\n"
"    <separator />\n"
"    <toolitem action='add-files' />\n"
"  </toolbar>\n"
"\n"
"  <popup name='filequeue-popup'>\n"
"    <menuitem action='remove-files' />\n"
"    <menuitem action='clear-list' />\n"
"    <separator />\n"
"    <menuitem action='select-parts' />\n"
"    <separator />\n"
"    <menuitem action='move-up' />\n"
"    <menuitem action='move-down' />\n"
"    <separator />\n"
"    <menuitem action='move-top' />\n"
"    <menuitem action='move-bottom' />\n"
"  </popup>\n"
"\n"
"</ui>\n";
