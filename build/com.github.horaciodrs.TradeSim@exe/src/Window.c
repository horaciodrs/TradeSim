/* Window.c generated by valac 0.40.23, the Vala compiler
 * generated from Window.vala, do not modify */

/*
 * Copyright (c) 2020-2020 horaciodrs (https://github.com/horaciodrs/TradeSim)
 *
 * This file is part of TradeSim.
 *
 * TradeSim is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * TradeSim is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with Akira. If not, see <https://www.gnu.org/licenses/>.
 *
 * Authored by: Horacio Daniel Ros <horaciodrs@gmail.com>
 */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <gio/gio.h>
#include <gdk/gdk.h>


#define TRADE_SIM_TYPE_MAIN_WINDOW (trade_sim_main_window_get_type ())
#define TRADE_SIM_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRADE_SIM_TYPE_MAIN_WINDOW, TradeSimMainWindow))
#define TRADE_SIM_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRADE_SIM_TYPE_MAIN_WINDOW, TradeSimMainWindowClass))
#define TRADE_SIM_IS_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRADE_SIM_TYPE_MAIN_WINDOW))
#define TRADE_SIM_IS_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRADE_SIM_TYPE_MAIN_WINDOW))
#define TRADE_SIM_MAIN_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRADE_SIM_TYPE_MAIN_WINDOW, TradeSimMainWindowClass))

typedef struct _TradeSimMainWindow TradeSimMainWindow;
typedef struct _TradeSimMainWindowClass TradeSimMainWindowClass;
typedef struct _TradeSimMainWindowPrivate TradeSimMainWindowPrivate;

#define TRADE_SIM_LAYOUTS_TYPE_HEADER_BAR (trade_sim_layouts_header_bar_get_type ())
#define TRADE_SIM_LAYOUTS_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRADE_SIM_LAYOUTS_TYPE_HEADER_BAR, TradeSimLayoutsHeaderBar))
#define TRADE_SIM_LAYOUTS_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRADE_SIM_LAYOUTS_TYPE_HEADER_BAR, TradeSimLayoutsHeaderBarClass))
#define TRADE_SIM_LAYOUTS_IS_HEADER_BAR(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRADE_SIM_LAYOUTS_TYPE_HEADER_BAR))
#define TRADE_SIM_LAYOUTS_IS_HEADER_BAR_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRADE_SIM_LAYOUTS_TYPE_HEADER_BAR))
#define TRADE_SIM_LAYOUTS_HEADER_BAR_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRADE_SIM_LAYOUTS_TYPE_HEADER_BAR, TradeSimLayoutsHeaderBarClass))

typedef struct _TradeSimLayoutsHeaderBar TradeSimLayoutsHeaderBar;
typedef struct _TradeSimLayoutsHeaderBarClass TradeSimLayoutsHeaderBarClass;

#define TRADE_SIM_LAYOUTS_TYPE_MAIN (trade_sim_layouts_main_get_type ())
#define TRADE_SIM_LAYOUTS_MAIN(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRADE_SIM_LAYOUTS_TYPE_MAIN, TradeSimLayoutsMain))
#define TRADE_SIM_LAYOUTS_MAIN_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRADE_SIM_LAYOUTS_TYPE_MAIN, TradeSimLayoutsMainClass))
#define TRADE_SIM_LAYOUTS_IS_MAIN(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRADE_SIM_LAYOUTS_TYPE_MAIN))
#define TRADE_SIM_LAYOUTS_IS_MAIN_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRADE_SIM_LAYOUTS_TYPE_MAIN))
#define TRADE_SIM_LAYOUTS_MAIN_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRADE_SIM_LAYOUTS_TYPE_MAIN, TradeSimLayoutsMainClass))

typedef struct _TradeSimLayoutsMain TradeSimLayoutsMain;
typedef struct _TradeSimLayoutsMainClass TradeSimLayoutsMainClass;
enum  {
	TRADE_SIM_MAIN_WINDOW_0_PROPERTY,
	TRADE_SIM_MAIN_WINDOW_NUM_PROPERTIES
};
static GParamSpec* trade_sim_main_window_properties[TRADE_SIM_MAIN_WINDOW_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

#define TRADE_SIM_TYPE_APPLICATION (trade_sim_application_get_type ())
#define TRADE_SIM_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRADE_SIM_TYPE_APPLICATION, TradeSimApplication))
#define TRADE_SIM_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRADE_SIM_TYPE_APPLICATION, TradeSimApplicationClass))
#define TRADE_SIM_IS_APPLICATION(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRADE_SIM_TYPE_APPLICATION))
#define TRADE_SIM_IS_APPLICATION_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRADE_SIM_TYPE_APPLICATION))
#define TRADE_SIM_APPLICATION_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRADE_SIM_TYPE_APPLICATION, TradeSimApplicationClass))

typedef struct _TradeSimApplication TradeSimApplication;
typedef struct _TradeSimApplicationClass TradeSimApplicationClass;
typedef struct _TradeSimLayoutsMainPrivate TradeSimLayoutsMainPrivate;

struct _TradeSimMainWindow {
	GtkApplicationWindow parent_instance;
	TradeSimMainWindowPrivate * priv;
	TradeSimLayoutsHeaderBar* headerbar;
	TradeSimLayoutsMain* main_layout;
	GSettings* settings;
};

struct _TradeSimMainWindowClass {
	GtkApplicationWindowClass parent_class;
};

struct _TradeSimLayoutsMain {
	GtkBox parent_instance;
	TradeSimLayoutsMainPrivate * priv;
	GtkPaned* pane_top;
	GtkPaned* pane_left;
};

struct _TradeSimLayoutsMainClass {
	GtkBoxClass parent_class;
};


static gpointer trade_sim_main_window_parent_class = NULL;

GType trade_sim_main_window_get_type (void) G_GNUC_CONST;
GType trade_sim_layouts_header_bar_get_type (void) G_GNUC_CONST;
GType trade_sim_layouts_main_get_type (void) G_GNUC_CONST;
GType trade_sim_application_get_type (void) G_GNUC_CONST;
TradeSimMainWindow* trade_sim_main_window_new (TradeSimApplication* trade_sim_app);
TradeSimMainWindow* trade_sim_main_window_construct (GType object_type,
                                                     TradeSimApplication* trade_sim_app);
gboolean trade_sim_main_window_before_destroy (TradeSimMainWindow* self);
static GObject * trade_sim_main_window_constructor (GType type,
                                             guint n_construct_properties,
                                             GObjectConstructParam * construct_properties);
TradeSimLayoutsHeaderBar* trade_sim_layouts_header_bar_new (TradeSimMainWindow* window);
TradeSimLayoutsHeaderBar* trade_sim_layouts_header_bar_construct (GType object_type,
                                                                  TradeSimMainWindow* window);
TradeSimLayoutsMain* trade_sim_layouts_main_new (TradeSimMainWindow* window);
TradeSimLayoutsMain* trade_sim_layouts_main_construct (GType object_type,
                                                       TradeSimMainWindow* window);
static gboolean _trade_sim_main_window___lambda4_ (TradeSimMainWindow* self,
                                            GdkEventAny* e);
static gboolean __trade_sim_main_window___lambda4__gtk_widget_delete_event (GtkWidget* _sender,
                                                                     GdkEventAny* event,
                                                                     gpointer self);
static void trade_sim_main_window_finalize (GObject * obj);


TradeSimMainWindow*
trade_sim_main_window_construct (GType object_type,
                                 TradeSimApplication* trade_sim_app)
{
	TradeSimMainWindow * self = NULL;
#line 29 "/home/horacio/Vala/TradeSim/src/Window.vala"
	g_return_val_if_fail (trade_sim_app != NULL, NULL);
#line 30 "/home/horacio/Vala/TradeSim/src/Window.vala"
	self = (TradeSimMainWindow*) g_object_new (object_type, "application", trade_sim_app, NULL);
#line 29 "/home/horacio/Vala/TradeSim/src/Window.vala"
	return self;
#line 144 "Window.c"
}


TradeSimMainWindow*
trade_sim_main_window_new (TradeSimApplication* trade_sim_app)
{
#line 29 "/home/horacio/Vala/TradeSim/src/Window.vala"
	return trade_sim_main_window_construct (TRADE_SIM_TYPE_MAIN_WINDOW, trade_sim_app);
#line 153 "Window.c"
}


gboolean
trade_sim_main_window_before_destroy (TradeSimMainWindow* self)
{
	gboolean result = FALSE;
	gint window_left = 0;
	gint window_top = 0;
	gint window_width = 0;
	gint window_height = 0;
	gint left_pane_width = 0;
	gint top_pane_height = 0;
	gint _tmp0_ = 0;
	gint _tmp1_ = 0;
	gint _tmp2_ = 0;
	gint _tmp3_ = 0;
	TradeSimLayoutsMain* _tmp4_;
	GtkPaned* _tmp5_;
	TradeSimLayoutsMain* _tmp6_;
	GtkPaned* _tmp7_;
	GSettings* _tmp8_;
	GSettings* _tmp9_;
	GSettings* _tmp10_;
	GSettings* _tmp11_;
	GSettings* _tmp12_;
	GSettings* _tmp13_;
#line 67 "/home/horacio/Vala/TradeSim/src/Window.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 76 "/home/horacio/Vala/TradeSim/src/Window.vala"
	gtk_window_get_size ((GtkWindow*) self, &_tmp0_, &_tmp1_);
#line 76 "/home/horacio/Vala/TradeSim/src/Window.vala"
	window_width = _tmp0_;
#line 76 "/home/horacio/Vala/TradeSim/src/Window.vala"
	window_height = _tmp1_;
#line 77 "/home/horacio/Vala/TradeSim/src/Window.vala"
	gtk_window_get_position ((GtkWindow*) self, &_tmp2_, &_tmp3_);
#line 77 "/home/horacio/Vala/TradeSim/src/Window.vala"
	window_left = _tmp2_;
#line 77 "/home/horacio/Vala/TradeSim/src/Window.vala"
	window_top = _tmp3_;
#line 79 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp4_ = self->main_layout;
#line 79 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp5_ = _tmp4_->pane_left;
#line 79 "/home/horacio/Vala/TradeSim/src/Window.vala"
	left_pane_width = gtk_paned_get_position (_tmp5_);
#line 80 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp6_ = self->main_layout;
#line 80 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp7_ = _tmp6_->pane_top;
#line 80 "/home/horacio/Vala/TradeSim/src/Window.vala"
	top_pane_height = gtk_paned_get_position (_tmp7_);
#line 82 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp8_ = self->settings;
#line 82 "/home/horacio/Vala/TradeSim/src/Window.vala"
	g_settings_set_int (_tmp8_, "window-left", window_left);
#line 83 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp9_ = self->settings;
#line 83 "/home/horacio/Vala/TradeSim/src/Window.vala"
	g_settings_set_int (_tmp9_, "window-top", window_top);
#line 84 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp10_ = self->settings;
#line 84 "/home/horacio/Vala/TradeSim/src/Window.vala"
	g_settings_set_int (_tmp10_, "window-width", window_width);
#line 85 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp11_ = self->settings;
#line 85 "/home/horacio/Vala/TradeSim/src/Window.vala"
	g_settings_set_int (_tmp11_, "window-height", window_height);
#line 87 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp12_ = self->settings;
#line 87 "/home/horacio/Vala/TradeSim/src/Window.vala"
	g_settings_set_int (_tmp12_, "window-left-pane-width", left_pane_width);
#line 88 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp13_ = self->settings;
#line 88 "/home/horacio/Vala/TradeSim/src/Window.vala"
	g_settings_set_int (_tmp13_, "window-top-pane-height", top_pane_height);
#line 90 "/home/horacio/Vala/TradeSim/src/Window.vala"
	result = FALSE;
#line 90 "/home/horacio/Vala/TradeSim/src/Window.vala"
	return result;
#line 235 "Window.c"
}


static gboolean
_trade_sim_main_window___lambda4_ (TradeSimMainWindow* self,
                                   GdkEventAny* e)
{
	gboolean result = FALSE;
#line 60 "/home/horacio/Vala/TradeSim/src/Window.vala"
	g_return_val_if_fail (e != NULL, FALSE);
#line 61 "/home/horacio/Vala/TradeSim/src/Window.vala"
	result = trade_sim_main_window_before_destroy (self);
#line 61 "/home/horacio/Vala/TradeSim/src/Window.vala"
	return result;
#line 250 "Window.c"
}


static gboolean
__trade_sim_main_window___lambda4__gtk_widget_delete_event (GtkWidget* _sender,
                                                            GdkEventAny* event,
                                                            gpointer self)
{
	gboolean result;
	result = _trade_sim_main_window___lambda4_ ((TradeSimMainWindow*) self, event);
#line 60 "/home/horacio/Vala/TradeSim/src/Window.vala"
	return result;
#line 263 "Window.c"
}


static GObject *
trade_sim_main_window_constructor (GType type,
                                   guint n_construct_properties,
                                   GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	TradeSimMainWindow * self;
	TradeSimLayoutsHeaderBar* _tmp0_;
	TradeSimLayoutsMain* _tmp1_;
	TradeSimLayoutsHeaderBar* _tmp2_;
	GtkCssProvider* css_provider = NULL;
	GtkCssProvider* _tmp3_;
	GtkCssProvider* _tmp4_;
	GdkScreen* _tmp5_;
	GtkCssProvider* _tmp6_;
	TradeSimLayoutsMain* _tmp7_;
	GSettings* _tmp8_;
	GSettings* _tmp9_;
	GSettings* _tmp10_;
	GSettings* _tmp11_;
	GSettings* _tmp12_;
	TradeSimLayoutsMain* _tmp13_;
	GtkPaned* _tmp14_;
	GSettings* _tmp15_;
	TradeSimLayoutsMain* _tmp16_;
	GtkPaned* _tmp17_;
	GSettings* _tmp18_;
	GError* _inner_error0_ = NULL;
#line 35 "/home/horacio/Vala/TradeSim/src/Window.vala"
	parent_class = G_OBJECT_CLASS (trade_sim_main_window_parent_class);
#line 35 "/home/horacio/Vala/TradeSim/src/Window.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 35 "/home/horacio/Vala/TradeSim/src/Window.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TRADE_SIM_TYPE_MAIN_WINDOW, TradeSimMainWindow);
#line 38 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp0_ = trade_sim_layouts_header_bar_new (self);
#line 38 "/home/horacio/Vala/TradeSim/src/Window.vala"
	g_object_ref_sink (_tmp0_);
#line 38 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_g_object_unref0 (self->headerbar);
#line 38 "/home/horacio/Vala/TradeSim/src/Window.vala"
	self->headerbar = _tmp0_;
#line 39 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp1_ = trade_sim_layouts_main_new (self);
#line 39 "/home/horacio/Vala/TradeSim/src/Window.vala"
	g_object_ref_sink (_tmp1_);
#line 39 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_g_object_unref0 (self->main_layout);
#line 39 "/home/horacio/Vala/TradeSim/src/Window.vala"
	self->main_layout = _tmp1_;
#line 41 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp2_ = self->headerbar;
#line 41 "/home/horacio/Vala/TradeSim/src/Window.vala"
	gtk_window_set_titlebar ((GtkWindow*) self, (GtkWidget*) _tmp2_);
#line 43 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp3_ = gtk_css_provider_new ();
#line 43 "/home/horacio/Vala/TradeSim/src/Window.vala"
	css_provider = _tmp3_;
#line 44 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp4_ = css_provider;
#line 44 "/home/horacio/Vala/TradeSim/src/Window.vala"
	gtk_css_provider_load_from_path (_tmp4_, "/usr/share/com.github.horaciodrs.TradeSim/stylesheet.css", &_inner_error0_);
#line 44 "/home/horacio/Vala/TradeSim/src/Window.vala"
	if (G_UNLIKELY (_inner_error0_ != NULL)) {
#line 44 "/home/horacio/Vala/TradeSim/src/Window.vala"
		_g_object_unref0 (css_provider);
#line 44 "/home/horacio/Vala/TradeSim/src/Window.vala"
		g_critical ("file %s: line %d: uncaught error: %s (%s, %d)", __FILE__, __LINE__, _inner_error0_->message, g_quark_to_string (_inner_error0_->domain), _inner_error0_->code);
#line 44 "/home/horacio/Vala/TradeSim/src/Window.vala"
		g_clear_error (&_inner_error0_);
#line 338 "Window.c"
	}
#line 46 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp5_ = gdk_screen_get_default ();
#line 46 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp6_ = css_provider;
#line 46 "/home/horacio/Vala/TradeSim/src/Window.vala"
	gtk_style_context_add_provider_for_screen (_tmp5_, (GtkStyleProvider*) _tmp6_, (guint) GTK_STYLE_PROVIDER_PRIORITY_APPLICATION);
#line 50 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp7_ = self->main_layout;
#line 50 "/home/horacio/Vala/TradeSim/src/Window.vala"
	gtk_container_add ((GtkContainer*) self, (GtkWidget*) _tmp7_);
#line 52 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp8_ = g_settings_new ("com.github.horaciodrs.tradesim");
#line 52 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_g_object_unref0 (self->settings);
#line 52 "/home/horacio/Vala/TradeSim/src/Window.vala"
	self->settings = _tmp8_;
#line 54 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp9_ = self->settings;
#line 54 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp10_ = self->settings;
#line 54 "/home/horacio/Vala/TradeSim/src/Window.vala"
	gtk_window_move ((GtkWindow*) self, g_settings_get_int (_tmp9_, "window-left"), g_settings_get_int (_tmp10_, "window-top"));
#line 55 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp11_ = self->settings;
#line 55 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp12_ = self->settings;
#line 55 "/home/horacio/Vala/TradeSim/src/Window.vala"
	gtk_window_resize ((GtkWindow*) self, g_settings_get_int (_tmp11_, "window-width"), g_settings_get_int (_tmp12_, "window-height"));
#line 57 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp13_ = self->main_layout;
#line 57 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp14_ = _tmp13_->pane_left;
#line 57 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp15_ = self->settings;
#line 57 "/home/horacio/Vala/TradeSim/src/Window.vala"
	gtk_paned_set_position (_tmp14_, g_settings_get_int (_tmp15_, "window-left-pane-width"));
#line 58 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp16_ = self->main_layout;
#line 58 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp17_ = _tmp16_->pane_top;
#line 58 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_tmp18_ = self->settings;
#line 58 "/home/horacio/Vala/TradeSim/src/Window.vala"
	gtk_paned_set_position (_tmp17_, g_settings_get_int (_tmp18_, "window-top-pane-height"));
#line 60 "/home/horacio/Vala/TradeSim/src/Window.vala"
	g_signal_connect_object ((GtkWidget*) self, "delete-event", (GCallback) __trade_sim_main_window___lambda4__gtk_widget_delete_event, self, 0);
#line 64 "/home/horacio/Vala/TradeSim/src/Window.vala"
	gtk_widget_show_all ((GtkWidget*) self);
#line 35 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_g_object_unref0 (css_provider);
#line 35 "/home/horacio/Vala/TradeSim/src/Window.vala"
	return obj;
#line 392 "Window.c"
}


static void
trade_sim_main_window_class_init (TradeSimMainWindowClass * klass)
{
#line 22 "/home/horacio/Vala/TradeSim/src/Window.vala"
	trade_sim_main_window_parent_class = g_type_class_peek_parent (klass);
#line 22 "/home/horacio/Vala/TradeSim/src/Window.vala"
	G_OBJECT_CLASS (klass)->constructor = trade_sim_main_window_constructor;
#line 22 "/home/horacio/Vala/TradeSim/src/Window.vala"
	G_OBJECT_CLASS (klass)->finalize = trade_sim_main_window_finalize;
#line 405 "Window.c"
}


static void
trade_sim_main_window_instance_init (TradeSimMainWindow * self)
{
}


static void
trade_sim_main_window_finalize (GObject * obj)
{
	TradeSimMainWindow * self;
#line 22 "/home/horacio/Vala/TradeSim/src/Window.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TRADE_SIM_TYPE_MAIN_WINDOW, TradeSimMainWindow);
#line 24 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_g_object_unref0 (self->headerbar);
#line 25 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_g_object_unref0 (self->main_layout);
#line 27 "/home/horacio/Vala/TradeSim/src/Window.vala"
	_g_object_unref0 (self->settings);
#line 22 "/home/horacio/Vala/TradeSim/src/Window.vala"
	G_OBJECT_CLASS (trade_sim_main_window_parent_class)->finalize (obj);
#line 429 "Window.c"
}


GType
trade_sim_main_window_get_type (void)
{
	static volatile gsize trade_sim_main_window_type_id__volatile = 0;
	if (g_once_init_enter (&trade_sim_main_window_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (TradeSimMainWindowClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) trade_sim_main_window_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (TradeSimMainWindow), 0, (GInstanceInitFunc) trade_sim_main_window_instance_init, NULL };
		GType trade_sim_main_window_type_id;
		trade_sim_main_window_type_id = g_type_register_static (gtk_application_window_get_type (), "TradeSimMainWindow", &g_define_type_info, 0);
		g_once_init_leave (&trade_sim_main_window_type_id__volatile, trade_sim_main_window_type_id);
	}
	return trade_sim_main_window_type_id__volatile;
}



