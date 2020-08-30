/* Canvas.c generated by valac 0.40.23, the Vala compiler
 * generated from Canvas.vala, do not modify */

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
/*
   TEMA DE COLORES

   PARA CAMBIAR EL COLOR SEGUN SI SE USA EL TEMA OSCURO O NO...
   UTILIZO UN ARRAY DONDE GUARDO POR RGB CADA TEMA.

   theme_type {0, 1}   0: Normal, 1: DarkVariant

   canvas_background_theme_red[theme_type]
   canvas_background_theme_green[theme_type]
   canvas_background_theme_blue[theme_type]

   canvas_candle_up_bg_theme_red[theme_type]
   canvas_candle_up_bg_theme_green[theme_type]
   canvas_candle_up_bg_theme_blue[theme_type]

   canvas_candle_up_brd_theme_red[theme_type]
   canvas_candle_up_brd_theme_green[theme_type]
   canvas_candle_up_brd_theme_blue[theme_type]

   canvas_candle_down_bg_theme_red[theme_type]
   canvas_candle_down_bg_theme_green[theme_type]
   canvas_candle_down_bg_theme_blue[theme_type]

   canvas_candle_down_brd_theme_red[theme_type]
   canvas_candle_down_brd_theme_green[theme_type]
   canvas_candle_down_brd_theme_blue[theme_type]

 */


#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>
#include <cairo.h>
#include <gdk/gdk.h>
#include <float.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <pango/pango.h>
#include <pango/pangocairo.h>


#define TRADE_SIM_WIDGETS_TYPE_CANVAS (trade_sim_widgets_canvas_get_type ())
#define TRADE_SIM_WIDGETS_CANVAS(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRADE_SIM_WIDGETS_TYPE_CANVAS, TradeSimWidgetsCanvas))
#define TRADE_SIM_WIDGETS_CANVAS_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRADE_SIM_WIDGETS_TYPE_CANVAS, TradeSimWidgetsCanvasClass))
#define TRADE_SIM_WIDGETS_IS_CANVAS(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRADE_SIM_WIDGETS_TYPE_CANVAS))
#define TRADE_SIM_WIDGETS_IS_CANVAS_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRADE_SIM_WIDGETS_TYPE_CANVAS))
#define TRADE_SIM_WIDGETS_CANVAS_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRADE_SIM_WIDGETS_TYPE_CANVAS, TradeSimWidgetsCanvasClass))

typedef struct _TradeSimWidgetsCanvas TradeSimWidgetsCanvas;
typedef struct _TradeSimWidgetsCanvasClass TradeSimWidgetsCanvasClass;
typedef struct _TradeSimWidgetsCanvasPrivate TradeSimWidgetsCanvasPrivate;

#define TRADE_SIM_TYPE_MAIN_WINDOW (trade_sim_main_window_get_type ())
#define TRADE_SIM_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRADE_SIM_TYPE_MAIN_WINDOW, TradeSimMainWindow))
#define TRADE_SIM_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRADE_SIM_TYPE_MAIN_WINDOW, TradeSimMainWindowClass))
#define TRADE_SIM_IS_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRADE_SIM_TYPE_MAIN_WINDOW))
#define TRADE_SIM_IS_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRADE_SIM_TYPE_MAIN_WINDOW))
#define TRADE_SIM_MAIN_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRADE_SIM_TYPE_MAIN_WINDOW, TradeSimMainWindowClass))

typedef struct _TradeSimMainWindow TradeSimMainWindow;
typedef struct _TradeSimMainWindowClass TradeSimMainWindowClass;

#define TRADE_SIM_SERVICES_TYPE_QUOTES_MANAGER (trade_sim_services_quotes_manager_get_type ())
#define TRADE_SIM_SERVICES_QUOTES_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRADE_SIM_SERVICES_TYPE_QUOTES_MANAGER, TradeSimServicesQuotesManager))
#define TRADE_SIM_SERVICES_QUOTES_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRADE_SIM_SERVICES_TYPE_QUOTES_MANAGER, TradeSimServicesQuotesManagerClass))
#define TRADE_SIM_SERVICES_IS_QUOTES_MANAGER(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRADE_SIM_SERVICES_TYPE_QUOTES_MANAGER))
#define TRADE_SIM_SERVICES_IS_QUOTES_MANAGER_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRADE_SIM_SERVICES_TYPE_QUOTES_MANAGER))
#define TRADE_SIM_SERVICES_QUOTES_MANAGER_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRADE_SIM_SERVICES_TYPE_QUOTES_MANAGER, TradeSimServicesQuotesManagerClass))

typedef struct _TradeSimServicesQuotesManager TradeSimServicesQuotesManager;
typedef struct _TradeSimServicesQuotesManagerClass TradeSimServicesQuotesManagerClass;
enum  {
	TRADE_SIM_WIDGETS_CANVAS_0_PROPERTY,
	TRADE_SIM_WIDGETS_CANVAS_NUM_PROPERTIES
};
static GParamSpec* trade_sim_widgets_canvas_properties[TRADE_SIM_WIDGETS_CANVAS_NUM_PROPERTIES];
#define _trade_sim_services_quotes_manager_unref0(var) ((var == NULL) ? NULL : (var = (trade_sim_services_quotes_manager_unref (var), NULL)))
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))
#define _g_date_time_unref0(var) ((var == NULL) ? NULL : (var = (g_date_time_unref (var), NULL)))

struct _TradeSimWidgetsCanvas {
	GtkDrawingArea parent_instance;
	TradeSimWidgetsCanvasPrivate * priv;
	TradeSimMainWindow* main_window;
	gint _width;
	gint _height;
	gint mouse_x;
	gint mouse_y;
	gboolean show_cross_lines;
	TradeSimServicesQuotesManager* data;
};

struct _TradeSimWidgetsCanvasClass {
	GtkDrawingAreaClass parent_class;
};


static gpointer trade_sim_widgets_canvas_parent_class = NULL;

GType trade_sim_widgets_canvas_get_type (void) G_GNUC_CONST;
GType trade_sim_main_window_get_type (void) G_GNUC_CONST;
gpointer trade_sim_services_quotes_manager_ref (gpointer instance);
void trade_sim_services_quotes_manager_unref (gpointer instance);
GParamSpec* trade_sim_services_param_spec_quotes_manager (const gchar* name,
                                                          const gchar* nick,
                                                          const gchar* blurb,
                                                          GType object_type,
                                                          GParamFlags flags);
void trade_sim_services_value_set_quotes_manager (GValue* value,
                                                  gpointer v_object);
void trade_sim_services_value_take_quotes_manager (GValue* value,
                                                   gpointer v_object);
gpointer trade_sim_services_value_get_quotes_manager (const GValue* value);
GType trade_sim_services_quotes_manager_get_type (void) G_GNUC_CONST;
TradeSimWidgetsCanvas* trade_sim_widgets_canvas_new (TradeSimMainWindow* window);
TradeSimWidgetsCanvas* trade_sim_widgets_canvas_construct (GType object_type,
                                                           TradeSimMainWindow* window);
gboolean trade_sim_widgets_canvas_on_mouse_over (TradeSimWidgetsCanvas* self,
                                                 GdkEventMotion* event);
static gboolean _trade_sim_widgets_canvas_on_mouse_over_gtk_widget_motion_notify_event (GtkWidget* _sender,
                                                                                 GdkEventMotion* event,
                                                                                 gpointer self);
gboolean trade_sim_widgets_canvas_on_mouse_out (TradeSimWidgetsCanvas* self,
                                                GdkEventCrossing* event);
static gboolean _trade_sim_widgets_canvas_on_mouse_out_gtk_widget_leave_notify_event (GtkWidget* _sender,
                                                                               GdkEventCrossing* event,
                                                                               gpointer self);
void trade_sim_widgets_canvas_draw_cross_lines (TradeSimWidgetsCanvas* self,
                                                cairo_t* ctext);
void trade_sim_widgets_canvas_draw_candle (TradeSimWidgetsCanvas* self,
                                           cairo_t* ctext,
                                           gint x,
                                           gint y);
void trade_sim_widgets_canvas_draw_candle_up (TradeSimWidgetsCanvas* self,
                                              cairo_t* ctext,
                                              gint x,
                                              gint y);
void trade_sim_widgets_canvas_draw_candle_down (TradeSimWidgetsCanvas* self,
                                                cairo_t* ctext,
                                                gint x,
                                                gint y);
void trade_sim_widgets_canvas_write_text (TradeSimWidgetsCanvas* self,
                                          cairo_t* ctext,
                                          gint x,
                                          gint y,
                                          const gchar* txt);
void trade_sim_widgets_canvas_draw_vertical_scale (TradeSimWidgetsCanvas* self,
                                                   cairo_t* ctext);
void trade_sim_widgets_canvas_draw_chart (TradeSimWidgetsCanvas* self,
                                          cairo_t* ctext);
static gboolean trade_sim_widgets_canvas_real_draw (GtkWidget* base,
                                             cairo_t* cr);
static void trade_sim_widgets_canvas_real_size_allocate (GtkWidget* base,
                                                  GtkAllocation* allocation);
static GObject * trade_sim_widgets_canvas_constructor (GType type,
                                                guint n_construct_properties,
                                                GObjectConstructParam * construct_properties);
TradeSimServicesQuotesManager* trade_sim_services_quotes_manager_new (const gchar* _ticker,
                                                                      const gchar* _time_frame,
                                                                      GDateTime* _start_date,
                                                                      GDateTime* _end_date);
TradeSimServicesQuotesManager* trade_sim_services_quotes_manager_construct (GType object_type,
                                                                            const gchar* _ticker,
                                                                            const gchar* _time_frame,
                                                                            GDateTime* _start_date,
                                                                            GDateTime* _end_date);
static void trade_sim_widgets_canvas_finalize (GObject * obj);


static gboolean
_trade_sim_widgets_canvas_on_mouse_over_gtk_widget_motion_notify_event (GtkWidget* _sender,
                                                                        GdkEventMotion* event,
                                                                        gpointer self)
{
	gboolean result;
	result = trade_sim_widgets_canvas_on_mouse_over ((TradeSimWidgetsCanvas*) self, event);
#line 72 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	return result;
#line 206 "Canvas.c"
}


static gboolean
_trade_sim_widgets_canvas_on_mouse_out_gtk_widget_leave_notify_event (GtkWidget* _sender,
                                                                      GdkEventCrossing* event,
                                                                      gpointer self)
{
	gboolean result;
	result = trade_sim_widgets_canvas_on_mouse_out ((TradeSimWidgetsCanvas*) self, event);
#line 74 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	return result;
#line 219 "Canvas.c"
}


TradeSimWidgetsCanvas*
trade_sim_widgets_canvas_construct (GType object_type,
                                    TradeSimMainWindow* window)
{
	TradeSimWidgetsCanvas * self = NULL;
#line 66 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_return_val_if_fail (window != NULL, NULL);
#line 66 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	self = (TradeSimWidgetsCanvas*) g_object_new (object_type, NULL);
#line 68 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	self->main_window = window;
#line 70 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	gtk_widget_add_events ((GtkWidget*) self, (gint) (((GDK_BUTTON_PRESS_MASK | GDK_BUTTON_RELEASE_MASK) | GDK_POINTER_MOTION_MASK) | GDK_LEAVE_NOTIFY_MASK));
#line 72 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_signal_connect_object ((GtkWidget*) self, "motion-notify-event", (GCallback) _trade_sim_widgets_canvas_on_mouse_over_gtk_widget_motion_notify_event, self, 0);
#line 74 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_signal_connect_object ((GtkWidget*) self, "leave-notify-event", (GCallback) _trade_sim_widgets_canvas_on_mouse_out_gtk_widget_leave_notify_event, self, 0);
#line 66 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	return self;
#line 242 "Canvas.c"
}


TradeSimWidgetsCanvas*
trade_sim_widgets_canvas_new (TradeSimMainWindow* window)
{
#line 66 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	return trade_sim_widgets_canvas_construct (TRADE_SIM_WIDGETS_TYPE_CANVAS, window);
#line 251 "Canvas.c"
}


gboolean
trade_sim_widgets_canvas_on_mouse_over (TradeSimWidgetsCanvas* self,
                                        GdkEventMotion* event)
{
	gboolean result = FALSE;
	gdouble _tmp0_;
	gdouble _tmp1_;
#line 89 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 89 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_return_val_if_fail (event != NULL, FALSE);
#line 91 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp0_ = event->x;
#line 91 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	self->mouse_x = (gint) _tmp0_;
#line 92 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp1_ = event->y;
#line 92 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	self->mouse_y = (gint) _tmp1_;
#line 93 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	self->show_cross_lines = TRUE;
#line 95 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	result = TRUE;
#line 95 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	return result;
#line 280 "Canvas.c"
}


gboolean
trade_sim_widgets_canvas_on_mouse_out (TradeSimWidgetsCanvas* self,
                                       GdkEventCrossing* event)
{
	gboolean result = FALSE;
#line 99 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_return_val_if_fail (self != NULL, FALSE);
#line 99 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_return_val_if_fail (event != NULL, FALSE);
#line 101 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	self->show_cross_lines = FALSE;
#line 103 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	result = TRUE;
#line 103 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	return result;
#line 299 "Canvas.c"
}


void
trade_sim_widgets_canvas_draw_cross_lines (TradeSimWidgetsCanvas* self,
                                           cairo_t* ctext)
{
	gboolean _tmp0_;
	gdouble* _tmp1_;
	gdouble* _tmp2_;
	gint _tmp2__length1;
	gint _tmp3_;
	gint _tmp4_;
	gint _tmp5_;
	gint _tmp6_;
	gint _tmp7_;
	gint _tmp8_;
#line 107 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_return_if_fail (self != NULL);
#line 107 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_return_if_fail (ctext != NULL);
#line 109 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp0_ = self->show_cross_lines;
#line 109 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	if (!_tmp0_) {
#line 110 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
		return;
#line 327 "Canvas.c"
	}
#line 114 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp1_ = g_new0 (gdouble, 1);
#line 114 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp1_[0] = 5.0;
#line 114 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp2_ = _tmp1_;
#line 114 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp2__length1 = 1;
#line 114 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_set_dash (ctext, _tmp2_, 1, (gdouble) 0);
#line 114 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp2_ = (g_free (_tmp2_), NULL);
#line 115 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_set_line_width (ctext, 0.2);
#line 116 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_set_source_rgba (ctext, (gdouble) 0, (gdouble) 0, (gdouble) 0, (gdouble) 1);
#line 117 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp3_ = self->mouse_y;
#line 117 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_move_to (ctext, (gdouble) 0, (gdouble) _tmp3_);
#line 118 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp4_ = self->_width;
#line 118 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp5_ = self->mouse_y;
#line 118 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_line_to (ctext, (gdouble) _tmp4_, (gdouble) _tmp5_);
#line 119 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_stroke (ctext);
#line 122 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_set_line_width (ctext, 0.2);
#line 123 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_set_source_rgba (ctext, (gdouble) 0, (gdouble) 0, (gdouble) 0, (gdouble) 1);
#line 124 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp6_ = self->mouse_x;
#line 124 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_move_to (ctext, (gdouble) _tmp6_, (gdouble) 0);
#line 125 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp7_ = self->mouse_x;
#line 125 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp8_ = self->_height;
#line 125 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_line_to (ctext, (gdouble) _tmp7_, (gdouble) _tmp8_);
#line 126 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_stroke (ctext);
#line 373 "Canvas.c"
}


void
trade_sim_widgets_canvas_draw_candle (TradeSimWidgetsCanvas* self,
                                      cairo_t* ctext,
                                      gint x,
                                      gint y)
{
	gint ancho = 0;
	gint alto = 0;
#line 130 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_return_if_fail (self != NULL);
#line 130 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_return_if_fail (ctext != NULL);
#line 132 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	ancho = 10;
#line 133 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	alto = 40;
#line 135 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_set_source_rgba (ctext, (gdouble) 0, (gdouble) 0, (gdouble) 0, (gdouble) 1);
#line 136 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_rectangle (ctext, (gdouble) x, (gdouble) y, (gdouble) ancho, (gdouble) alto);
#line 137 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_fill (ctext);
#line 399 "Canvas.c"
}


void
trade_sim_widgets_canvas_draw_candle_up (TradeSimWidgetsCanvas* self,
                                         cairo_t* ctext,
                                         gint x,
                                         gint y)
{
	gint ancho = 0;
	gint alto = 0;
#line 141 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_return_if_fail (self != NULL);
#line 141 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_return_if_fail (ctext != NULL);
#line 143 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	ancho = 10;
#line 144 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	alto = 40;
#line 147 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_set_line_width (ctext, 1.0);
#line 148 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_set_source_rgba (ctext, (gdouble) 0, (gdouble) 0, (gdouble) 0, 1.0);
#line 149 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_move_to (ctext, (gdouble) x, (gdouble) y);
#line 150 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_line_to (ctext, (gdouble) x, (gdouble) (y + alto));
#line 151 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_stroke (ctext);
#line 154 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_set_line_width (ctext, 1.0);
#line 155 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_set_source_rgba (ctext, (gdouble) 0, (gdouble) 0, (gdouble) 0, 1.0);
#line 156 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_move_to (ctext, (gdouble) (x + ancho), (gdouble) y);
#line 157 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_line_to (ctext, (gdouble) (x + ancho), (gdouble) (y + alto));
#line 158 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_stroke (ctext);
#line 161 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_set_line_width (ctext, 1.0);
#line 162 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_set_source_rgba (ctext, (gdouble) 0, (gdouble) 0, (gdouble) 0, 1.0);
#line 163 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_move_to (ctext, (gdouble) (x - 1), (gdouble) y);
#line 164 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_line_to (ctext, (gdouble) ((x + ancho) + 1), (gdouble) y);
#line 165 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_stroke (ctext);
#line 168 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_set_line_width (ctext, 1.0);
#line 169 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_set_source_rgba (ctext, (gdouble) 0, (gdouble) 0, (gdouble) 0, 1.0);
#line 170 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_move_to (ctext, (gdouble) (x - 1), (gdouble) (y + alto));
#line 171 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_line_to (ctext, (gdouble) ((x + ancho) + 1), (gdouble) (y + alto));
#line 172 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_stroke (ctext);
#line 174 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_set_source_rgba (ctext, (gdouble) 255, (gdouble) 255, (gdouble) 255, (gdouble) 1);
#line 175 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_rectangle (ctext, (gdouble) x, (gdouble) y, (gdouble) ancho, (gdouble) alto);
#line 176 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_fill (ctext);
#line 465 "Canvas.c"
}


void
trade_sim_widgets_canvas_draw_candle_down (TradeSimWidgetsCanvas* self,
                                           cairo_t* ctext,
                                           gint x,
                                           gint y)
{
	gint ancho = 0;
	gint alto = 0;
#line 180 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_return_if_fail (self != NULL);
#line 180 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_return_if_fail (ctext != NULL);
#line 182 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	ancho = 10;
#line 183 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	alto = 40;
#line 185 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_set_source_rgba (ctext, (gdouble) 0, (gdouble) 0, (gdouble) 0, (gdouble) 1);
#line 186 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_rectangle (ctext, (gdouble) x, (gdouble) y, (gdouble) ancho, (gdouble) alto);
#line 187 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_fill (ctext);
#line 491 "Canvas.c"
}


void
trade_sim_widgets_canvas_write_text (TradeSimWidgetsCanvas* self,
                                     cairo_t* ctext,
                                     gint x,
                                     gint y,
                                     const gchar* txt)
{
	PangoLayout* layout = NULL;
	PangoLayout* _tmp0_;
#line 191 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_return_if_fail (self != NULL);
#line 191 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_return_if_fail (ctext != NULL);
#line 191 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_return_if_fail (txt != NULL);
#line 195 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp0_ = gtk_widget_create_pango_layout ((GtkWidget*) self, txt);
#line 195 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_g_object_unref0 (layout);
#line 195 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	layout = _tmp0_;
#line 197 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_set_source_rgba (ctext, (gdouble) 0, (gdouble) 0, (gdouble) 0, (gdouble) 1);
#line 198 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_move_to (ctext, (gdouble) x, (gdouble) y);
#line 199 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	pango_cairo_update_layout (ctext, layout);
#line 200 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	pango_cairo_show_layout (ctext, layout);
#line 202 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	gtk_widget_queue_draw ((GtkWidget*) self);
#line 191 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_g_object_unref0 (layout);
#line 528 "Canvas.c"
}


void
trade_sim_widgets_canvas_draw_vertical_scale (TradeSimWidgetsCanvas* self,
                                              cairo_t* ctext)
{
	gint i = 0;
	gint pos_y = 0;
	gdouble precio = 0.0;
	gdouble step = 0.0;
	gchar* buf = NULL;
	gchar* _tmp0_;
	gint buf_length1;
	gint _buf_size_;
	gint _tmp1_;
	gint _tmp2_;
#line 206 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_return_if_fail (self != NULL);
#line 206 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_return_if_fail (ctext != NULL);
#line 208 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	i = 0;
#line 209 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	pos_y = 10;
#line 210 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	precio = 1.1521;
#line 211 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	step = 0.0001;
#line 212 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp0_ = g_new0 (gchar, G_ASCII_DTOSTR_BUF_SIZE);
#line 212 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	buf = _tmp0_;
#line 212 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	buf_length1 = G_ASCII_DTOSTR_BUF_SIZE;
#line 212 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_buf_size_ = buf_length1;
#line 214 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_set_source_rgba (ctext, (gdouble) 255, (gdouble) 255, (gdouble) 255, (gdouble) 1);
#line 215 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp1_ = self->_width;
#line 215 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp2_ = self->_height;
#line 215 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_rectangle (ctext, (gdouble) (_tmp1_ - 55), (gdouble) 5, (gdouble) 60, (gdouble) (_tmp2_ - 3));
#line 216 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_fill (ctext);
#line 217 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_stroke (ctext);
#line 578 "Canvas.c"
	{
		gboolean _tmp3_ = FALSE;
#line 219 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
		i = 0;
#line 219 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
		_tmp3_ = TRUE;
#line 219 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
		while (TRUE) {
#line 587 "Canvas.c"
			gint _tmp5_;
			gint _tmp6_;
			gint _tmp7_;
			gdouble _tmp8_;
			gchar* _tmp9_;
			gint _tmp9__length1;
			const gchar* _tmp10_;
			gdouble _tmp11_;
			gdouble _tmp12_;
			gint _tmp13_;
#line 219 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
			if (!_tmp3_) {
#line 600 "Canvas.c"
				gint _tmp4_;
#line 219 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
				_tmp4_ = i;
#line 219 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
				i = _tmp4_ + 1;
#line 606 "Canvas.c"
			}
#line 219 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
			_tmp3_ = FALSE;
#line 219 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
			_tmp5_ = i;
#line 219 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
			if (!(_tmp5_ < 20)) {
#line 219 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
				break;
#line 616 "Canvas.c"
			}
#line 221 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
			_tmp6_ = self->_width;
#line 221 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
			_tmp7_ = pos_y;
#line 221 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
			_tmp8_ = precio;
#line 221 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
			_tmp9_ = buf;
#line 221 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
			_tmp9__length1 = buf_length1;
#line 221 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
			_tmp10_ = g_ascii_formatd (_tmp9_, _tmp9__length1, "%g", _tmp8_);
#line 221 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
			trade_sim_widgets_canvas_write_text (self, ctext, _tmp6_ - 50, _tmp7_, _tmp10_);
#line 222 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
			_tmp11_ = precio;
#line 222 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
			_tmp12_ = step;
#line 222 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
			precio = _tmp11_ - _tmp12_;
#line 223 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
			_tmp13_ = pos_y;
#line 223 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
			pos_y = _tmp13_ + 15;
#line 642 "Canvas.c"
		}
	}
#line 206 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	buf = (g_free (buf), NULL);
#line 647 "Canvas.c"
}


void
trade_sim_widgets_canvas_draw_chart (TradeSimWidgetsCanvas* self,
                                     cairo_t* ctext)
{
#line 229 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_return_if_fail (self != NULL);
#line 229 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_return_if_fail (ctext != NULL);
#line 237 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	trade_sim_widgets_canvas_draw_candle (self, ctext, 20, 20);
#line 238 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	trade_sim_widgets_canvas_draw_candle_up (self, ctext, 35, 30);
#line 239 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	trade_sim_widgets_canvas_draw_candle (self, ctext, 50, 40);
#line 240 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	trade_sim_widgets_canvas_draw_candle_up (self, ctext, 65, 35);
#line 667 "Canvas.c"
}


static gboolean
trade_sim_widgets_canvas_real_draw (GtkWidget* base,
                                    cairo_t* cr)
{
	TradeSimWidgetsCanvas * self;
	gboolean result = FALSE;
#line 244 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	self = (TradeSimWidgetsCanvas*) base;
#line 244 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_return_val_if_fail (cr != NULL, FALSE);
#line 246 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	self->_width = gtk_widget_get_allocated_width ((GtkWidget*) self);
#line 247 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	self->_height = gtk_widget_get_allocated_height ((GtkWidget*) self);
#line 263 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	trade_sim_widgets_canvas_draw_chart (self, cr);
#line 265 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	trade_sim_widgets_canvas_draw_vertical_scale (self, cr);
#line 267 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	trade_sim_widgets_canvas_draw_cross_lines (self, cr);
#line 269 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_restore (cr);
#line 270 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	cairo_save (cr);
#line 272 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	result = TRUE;
#line 272 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	return result;
#line 699 "Canvas.c"
}


static void
trade_sim_widgets_canvas_real_size_allocate (GtkWidget* base,
                                             GtkAllocation* allocation)
{
	TradeSimWidgetsCanvas * self;
	GtkAllocation _tmp0_;
#line 275 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	self = (TradeSimWidgetsCanvas*) base;
#line 275 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	g_return_if_fail (allocation != NULL);
#line 278 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp0_ = *allocation;
#line 278 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	GTK_WIDGET_CLASS (trade_sim_widgets_canvas_parent_class)->size_allocate ((GtkWidget*) G_TYPE_CHECK_INSTANCE_CAST (self, gtk_drawing_area_get_type (), GtkDrawingArea), &_tmp0_);
#line 717 "Canvas.c"
}


static GObject *
trade_sim_widgets_canvas_constructor (GType type,
                                      guint n_construct_properties,
                                      GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	TradeSimWidgetsCanvas * self;
	GDateTime* fecha_desde = NULL;
	GDateTime* _tmp0_;
	GDateTime* fecha_hasta = NULL;
	GDateTime* _tmp1_;
	GDateTime* _tmp2_;
	GDateTime* _tmp3_;
	TradeSimServicesQuotesManager* _tmp4_;
#line 78 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	parent_class = G_OBJECT_CLASS (trade_sim_widgets_canvas_parent_class);
#line 78 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 78 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TRADE_SIM_WIDGETS_TYPE_CANVAS, TradeSimWidgetsCanvas);
#line 79 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	gtk_widget_set_size_request ((GtkWidget*) self, 640, 480);
#line 80 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	self->show_cross_lines = FALSE;
#line 82 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp0_ = g_date_time_new_local (2011, 2, 21, 10, 0, (gdouble) 0);
#line 82 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	fecha_desde = _tmp0_;
#line 83 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp1_ = g_date_time_new_local (2011, 2, 21, 10, 5, (gdouble) 0);
#line 83 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	fecha_hasta = _tmp1_;
#line 85 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp2_ = fecha_desde;
#line 85 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp3_ = fecha_hasta;
#line 85 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_tmp4_ = trade_sim_services_quotes_manager_new ("EURUSD", "M1", _tmp2_, _tmp3_);
#line 85 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_trade_sim_services_quotes_manager_unref0 (self->data);
#line 85 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	self->data = _tmp4_;
#line 78 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_g_date_time_unref0 (fecha_hasta);
#line 78 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_g_date_time_unref0 (fecha_desde);
#line 78 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	return obj;
#line 770 "Canvas.c"
}


static void
trade_sim_widgets_canvas_class_init (TradeSimWidgetsCanvasClass * klass)
{
#line 53 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	trade_sim_widgets_canvas_parent_class = g_type_class_peek_parent (klass);
#line 53 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	((GtkWidgetClass *) klass)->draw = (gboolean (*) (GtkWidget*, cairo_t*)) trade_sim_widgets_canvas_real_draw;
#line 53 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	((GtkWidgetClass *) klass)->size_allocate = (void (*) (GtkWidget*, GtkAllocation*)) trade_sim_widgets_canvas_real_size_allocate;
#line 53 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	G_OBJECT_CLASS (klass)->constructor = trade_sim_widgets_canvas_constructor;
#line 53 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	G_OBJECT_CLASS (klass)->finalize = trade_sim_widgets_canvas_finalize;
#line 787 "Canvas.c"
}


static void
trade_sim_widgets_canvas_instance_init (TradeSimWidgetsCanvas * self)
{
}


static void
trade_sim_widgets_canvas_finalize (GObject * obj)
{
	TradeSimWidgetsCanvas * self;
#line 53 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TRADE_SIM_WIDGETS_TYPE_CANVAS, TradeSimWidgetsCanvas);
#line 64 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	_trade_sim_services_quotes_manager_unref0 (self->data);
#line 53 "/home/horacio/Vala/TradeSim/src/Widgets/Canvas.vala"
	G_OBJECT_CLASS (trade_sim_widgets_canvas_parent_class)->finalize (obj);
#line 807 "Canvas.c"
}


GType
trade_sim_widgets_canvas_get_type (void)
{
	static volatile gsize trade_sim_widgets_canvas_type_id__volatile = 0;
	if (g_once_init_enter (&trade_sim_widgets_canvas_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (TradeSimWidgetsCanvasClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) trade_sim_widgets_canvas_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (TradeSimWidgetsCanvas), 0, (GInstanceInitFunc) trade_sim_widgets_canvas_instance_init, NULL };
		GType trade_sim_widgets_canvas_type_id;
		trade_sim_widgets_canvas_type_id = g_type_register_static (gtk_drawing_area_get_type (), "TradeSimWidgetsCanvas", &g_define_type_info, 0);
		g_once_init_leave (&trade_sim_widgets_canvas_type_id__volatile, trade_sim_widgets_canvas_type_id);
	}
	return trade_sim_widgets_canvas_type_id__volatile;
}



