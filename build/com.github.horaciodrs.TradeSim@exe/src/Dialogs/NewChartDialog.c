/* NewChartDialog.c generated by valac 0.40.23, the Vala compiler
 * generated from NewChartDialog.vala, do not modify */



#include <glib.h>
#include <glib-object.h>
#include <gtk/gtk.h>


#define TRADE_SIM_DIALOGS_TYPE_NEW_CHART_DIALOG (trade_sim_dialogs_new_chart_dialog_get_type ())
#define TRADE_SIM_DIALOGS_NEW_CHART_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRADE_SIM_DIALOGS_TYPE_NEW_CHART_DIALOG, TradeSimDialogsNewChartDialog))
#define TRADE_SIM_DIALOGS_NEW_CHART_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRADE_SIM_DIALOGS_TYPE_NEW_CHART_DIALOG, TradeSimDialogsNewChartDialogClass))
#define TRADE_SIM_DIALOGS_IS_NEW_CHART_DIALOG(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRADE_SIM_DIALOGS_TYPE_NEW_CHART_DIALOG))
#define TRADE_SIM_DIALOGS_IS_NEW_CHART_DIALOG_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRADE_SIM_DIALOGS_TYPE_NEW_CHART_DIALOG))
#define TRADE_SIM_DIALOGS_NEW_CHART_DIALOG_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRADE_SIM_DIALOGS_TYPE_NEW_CHART_DIALOG, TradeSimDialogsNewChartDialogClass))

typedef struct _TradeSimDialogsNewChartDialog TradeSimDialogsNewChartDialog;
typedef struct _TradeSimDialogsNewChartDialogClass TradeSimDialogsNewChartDialogClass;
typedef struct _TradeSimDialogsNewChartDialogPrivate TradeSimDialogsNewChartDialogPrivate;

#define TRADE_SIM_TYPE_MAIN_WINDOW (trade_sim_main_window_get_type ())
#define TRADE_SIM_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_CAST ((obj), TRADE_SIM_TYPE_MAIN_WINDOW, TradeSimMainWindow))
#define TRADE_SIM_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_CAST ((klass), TRADE_SIM_TYPE_MAIN_WINDOW, TradeSimMainWindowClass))
#define TRADE_SIM_IS_MAIN_WINDOW(obj) (G_TYPE_CHECK_INSTANCE_TYPE ((obj), TRADE_SIM_TYPE_MAIN_WINDOW))
#define TRADE_SIM_IS_MAIN_WINDOW_CLASS(klass) (G_TYPE_CHECK_CLASS_TYPE ((klass), TRADE_SIM_TYPE_MAIN_WINDOW))
#define TRADE_SIM_MAIN_WINDOW_GET_CLASS(obj) (G_TYPE_INSTANCE_GET_CLASS ((obj), TRADE_SIM_TYPE_MAIN_WINDOW, TradeSimMainWindowClass))

typedef struct _TradeSimMainWindow TradeSimMainWindow;
typedef struct _TradeSimMainWindowClass TradeSimMainWindowClass;
enum  {
	TRADE_SIM_DIALOGS_NEW_CHART_DIALOG_0_PROPERTY,
	TRADE_SIM_DIALOGS_NEW_CHART_DIALOG_MAIN_WINDOW_PROPERTY,
	TRADE_SIM_DIALOGS_NEW_CHART_DIALOG_NUM_PROPERTIES
};
static GParamSpec* trade_sim_dialogs_new_chart_dialog_properties[TRADE_SIM_DIALOGS_NEW_CHART_DIALOG_NUM_PROPERTIES];
#define _g_object_unref0(var) ((var == NULL) ? NULL : (var = (g_object_unref (var), NULL)))

struct _TradeSimDialogsNewChartDialog {
	GtkDialog parent_instance;
	TradeSimDialogsNewChartDialogPrivate * priv;
	GtkCalendar* calendario;
	GtkEntry* time_frame;
	GtkButton* acept_button;
	GtkButton* cancel_button;
};

struct _TradeSimDialogsNewChartDialogClass {
	GtkDialogClass parent_class;
};

struct _TradeSimDialogsNewChartDialogPrivate {
	TradeSimMainWindow* _main_window;
};


static gpointer trade_sim_dialogs_new_chart_dialog_parent_class = NULL;

GType trade_sim_dialogs_new_chart_dialog_get_type (void) G_GNUC_CONST;
GType trade_sim_main_window_get_type (void) G_GNUC_CONST;
#define TRADE_SIM_DIALOGS_NEW_CHART_DIALOG_GET_PRIVATE(o) (G_TYPE_INSTANCE_GET_PRIVATE ((o), TRADE_SIM_DIALOGS_TYPE_NEW_CHART_DIALOG, TradeSimDialogsNewChartDialogPrivate))
TradeSimDialogsNewChartDialog* trade_sim_dialogs_new_chart_dialog_new (TradeSimMainWindow* window);
TradeSimDialogsNewChartDialog* trade_sim_dialogs_new_chart_dialog_construct (GType object_type,
                                                                             TradeSimMainWindow* window);
TradeSimMainWindow* trade_sim_dialogs_new_chart_dialog_get_main_window (TradeSimDialogsNewChartDialog* self);
static void trade_sim_dialogs_new_chart_dialog_set_main_window (TradeSimDialogsNewChartDialog* self,
                                                         TradeSimMainWindow* value);
static GObject * trade_sim_dialogs_new_chart_dialog_constructor (GType type,
                                                          guint n_construct_properties,
                                                          GObjectConstructParam * construct_properties);
static void _trade_sim_dialogs_new_chart_dialog___lambda5_ (TradeSimDialogsNewChartDialog* self);
static void __trade_sim_dialogs_new_chart_dialog___lambda5__gtk_button_clicked (GtkButton* _sender,
                                                                         gpointer self);
static void trade_sim_dialogs_new_chart_dialog_finalize (GObject * obj);
static void _vala_trade_sim_dialogs_new_chart_dialog_get_property (GObject * object,
                                                            guint property_id,
                                                            GValue * value,
                                                            GParamSpec * pspec);
static void _vala_trade_sim_dialogs_new_chart_dialog_set_property (GObject * object,
                                                            guint property_id,
                                                            const GValue * value,
                                                            GParamSpec * pspec);


TradeSimDialogsNewChartDialog*
trade_sim_dialogs_new_chart_dialog_construct (GType object_type,
                                              TradeSimMainWindow* window)
{
	TradeSimDialogsNewChartDialog * self = NULL;
#line 11 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	g_return_val_if_fail (window != NULL, NULL);
#line 12 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	self = (TradeSimDialogsNewChartDialog*) g_object_new (object_type, "main-window", window, "border-width", 6, "deletable", TRUE, "resizable", TRUE, "modal", TRUE, "title", "Nuevo Gráfico", NULL);
#line 11 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	return self;
#line 97 "NewChartDialog.c"
}


TradeSimDialogsNewChartDialog*
trade_sim_dialogs_new_chart_dialog_new (TradeSimMainWindow* window)
{
#line 11 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	return trade_sim_dialogs_new_chart_dialog_construct (TRADE_SIM_DIALOGS_TYPE_NEW_CHART_DIALOG, window);
#line 106 "NewChartDialog.c"
}


TradeSimMainWindow*
trade_sim_dialogs_new_chart_dialog_get_main_window (TradeSimDialogsNewChartDialog* self)
{
	TradeSimMainWindow* result;
	TradeSimMainWindow* _tmp0_;
#line 3 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	g_return_val_if_fail (self != NULL, NULL);
#line 3 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp0_ = self->priv->_main_window;
#line 3 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	result = _tmp0_;
#line 3 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	return result;
#line 123 "NewChartDialog.c"
}


static void
trade_sim_dialogs_new_chart_dialog_set_main_window (TradeSimDialogsNewChartDialog* self,
                                                    TradeSimMainWindow* value)
{
#line 3 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	g_return_if_fail (self != NULL);
#line 3 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	if (trade_sim_dialogs_new_chart_dialog_get_main_window (self) != value) {
#line 3 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
		self->priv->_main_window = value;
#line 3 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
		g_object_notify_by_pspec ((GObject *) self, trade_sim_dialogs_new_chart_dialog_properties[TRADE_SIM_DIALOGS_NEW_CHART_DIALOG_MAIN_WINDOW_PROPERTY]);
#line 139 "NewChartDialog.c"
	}
}


static void
_trade_sim_dialogs_new_chart_dialog___lambda5_ (TradeSimDialogsNewChartDialog* self)
{
#line 38 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	g_signal_emit_by_name ((GtkDialog*) self, "close");
#line 149 "NewChartDialog.c"
}


static void
__trade_sim_dialogs_new_chart_dialog___lambda5__gtk_button_clicked (GtkButton* _sender,
                                                                    gpointer self)
{
#line 37 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_trade_sim_dialogs_new_chart_dialog___lambda5_ ((TradeSimDialogsNewChartDialog*) self);
#line 159 "NewChartDialog.c"
}


static GObject *
trade_sim_dialogs_new_chart_dialog_constructor (GType type,
                                                guint n_construct_properties,
                                                GObjectConstructParam * construct_properties)
{
	GObject * obj;
	GObjectClass * parent_class;
	TradeSimDialogsNewChartDialog * self;
	GtkGrid* grid = NULL;
	GtkGrid* _tmp0_;
	GtkGrid* _tmp1_;
	GtkGrid* _tmp2_;
	GtkGrid* _tmp3_;
	GtkEntry* _tmp4_;
	GtkCalendar* _tmp5_;
	GtkButton* _tmp6_;
	GtkButton* _tmp7_;
	GtkButton* _tmp8_;
	GtkButton* _tmp9_;
	GtkStyleContext* _tmp10_;
	GtkLabel* lbl_time_frame = NULL;
	GtkLabel* _tmp11_;
	GtkGrid* _tmp12_;
	GtkLabel* _tmp13_;
	GtkGrid* _tmp14_;
	GtkEntry* _tmp15_;
	GtkGrid* _tmp16_;
	GtkCalendar* _tmp17_;
	GtkGrid* _tmp18_;
	GtkButton* _tmp19_;
	GtkGrid* _tmp20_;
	GtkButton* _tmp21_;
	GtkGrid* _tmp22_;
	GtkBox* _tmp23_;
	GtkGrid* _tmp24_;
#line 22 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	parent_class = G_OBJECT_CLASS (trade_sim_dialogs_new_chart_dialog_parent_class);
#line 22 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	obj = parent_class->constructor (type, n_construct_properties, construct_properties);
#line 22 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TRADE_SIM_DIALOGS_TYPE_NEW_CHART_DIALOG, TradeSimDialogsNewChartDialog);
#line 25 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp0_ = (GtkGrid*) gtk_grid_new ();
#line 25 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	g_object_ref_sink (_tmp0_);
#line 25 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	grid = _tmp0_;
#line 26 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp1_ = grid;
#line 26 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	gtk_widget_set_halign ((GtkWidget*) _tmp1_, GTK_ALIGN_FILL);
#line 27 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp2_ = grid;
#line 27 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	gtk_grid_set_row_spacing (_tmp2_, 6);
#line 28 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp3_ = grid;
#line 28 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	gtk_grid_set_column_spacing (_tmp3_, 6);
#line 30 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp4_ = (GtkEntry*) gtk_entry_new ();
#line 30 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	g_object_ref_sink (_tmp4_);
#line 30 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_g_object_unref0 (self->time_frame);
#line 30 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	self->time_frame = _tmp4_;
#line 32 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp5_ = (GtkCalendar*) gtk_calendar_new ();
#line 32 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	g_object_ref_sink (_tmp5_);
#line 32 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_g_object_unref0 (self->calendario);
#line 32 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	self->calendario = _tmp5_;
#line 34 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp6_ = (GtkButton*) gtk_button_new_with_label ("Ok");
#line 34 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	g_object_ref_sink (_tmp6_);
#line 34 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_g_object_unref0 (self->acept_button);
#line 34 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	self->acept_button = _tmp6_;
#line 35 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp7_ = (GtkButton*) gtk_button_new_with_label ("Cancel");
#line 35 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	g_object_ref_sink (_tmp7_);
#line 35 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_g_object_unref0 (self->cancel_button);
#line 35 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	self->cancel_button = _tmp7_;
#line 37 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp8_ = self->cancel_button;
#line 37 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	g_signal_connect_object (_tmp8_, "clicked", (GCallback) __trade_sim_dialogs_new_chart_dialog___lambda5__gtk_button_clicked, self, 0);
#line 41 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp9_ = self->acept_button;
#line 41 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp10_ = gtk_widget_get_style_context ((GtkWidget*) _tmp9_);
#line 41 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	gtk_style_context_add_class (_tmp10_, GTK_STYLE_CLASS_SUGGESTED_ACTION);
#line 43 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp11_ = (GtkLabel*) gtk_label_new ("Time Frame:");
#line 43 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	g_object_ref_sink (_tmp11_);
#line 43 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	lbl_time_frame = _tmp11_;
#line 45 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp12_ = grid;
#line 45 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp13_ = lbl_time_frame;
#line 45 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	gtk_grid_attach (_tmp12_, (GtkWidget*) _tmp13_, 0, 0, 1, 1);
#line 46 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp14_ = grid;
#line 46 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp15_ = self->time_frame;
#line 46 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	gtk_grid_attach (_tmp14_, (GtkWidget*) _tmp15_, 0, 1, 1, 1);
#line 47 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp16_ = grid;
#line 47 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp17_ = self->calendario;
#line 47 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	gtk_grid_attach (_tmp16_, (GtkWidget*) _tmp17_, 1, 0, 1, 2);
#line 48 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp18_ = grid;
#line 48 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp19_ = self->cancel_button;
#line 48 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	gtk_grid_attach (_tmp18_, (GtkWidget*) _tmp19_, 0, 3, 1, 1);
#line 49 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp20_ = grid;
#line 49 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp21_ = self->acept_button;
#line 49 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	gtk_grid_attach (_tmp20_, (GtkWidget*) _tmp21_, 1, 3, 1, 1);
#line 52 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp22_ = grid;
#line 52 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	gtk_widget_set_hexpand ((GtkWidget*) _tmp22_, TRUE);
#line 54 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp23_ = gtk_dialog_get_content_area ((GtkDialog*) self);
#line 54 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_tmp24_ = grid;
#line 54 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	gtk_container_add ((GtkContainer*) _tmp23_, (GtkWidget*) _tmp24_);
#line 22 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_g_object_unref0 (lbl_time_frame);
#line 22 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_g_object_unref0 (grid);
#line 22 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	return obj;
#line 316 "NewChartDialog.c"
}


static void
trade_sim_dialogs_new_chart_dialog_class_init (TradeSimDialogsNewChartDialogClass * klass)
{
#line 1 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	trade_sim_dialogs_new_chart_dialog_parent_class = g_type_class_peek_parent (klass);
#line 1 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	g_type_class_add_private (klass, sizeof (TradeSimDialogsNewChartDialogPrivate));
#line 1 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	G_OBJECT_CLASS (klass)->get_property = _vala_trade_sim_dialogs_new_chart_dialog_get_property;
#line 1 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	G_OBJECT_CLASS (klass)->set_property = _vala_trade_sim_dialogs_new_chart_dialog_set_property;
#line 1 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	G_OBJECT_CLASS (klass)->constructor = trade_sim_dialogs_new_chart_dialog_constructor;
#line 1 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	G_OBJECT_CLASS (klass)->finalize = trade_sim_dialogs_new_chart_dialog_finalize;
#line 1 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	g_object_class_install_property (G_OBJECT_CLASS (klass), TRADE_SIM_DIALOGS_NEW_CHART_DIALOG_MAIN_WINDOW_PROPERTY, trade_sim_dialogs_new_chart_dialog_properties[TRADE_SIM_DIALOGS_NEW_CHART_DIALOG_MAIN_WINDOW_PROPERTY] = g_param_spec_object ("main-window", "main-window", "main-window", TRADE_SIM_TYPE_MAIN_WINDOW, G_PARAM_STATIC_STRINGS | G_PARAM_READABLE | G_PARAM_WRITABLE | G_PARAM_CONSTRUCT_ONLY));
#line 337 "NewChartDialog.c"
}


static void
trade_sim_dialogs_new_chart_dialog_instance_init (TradeSimDialogsNewChartDialog * self)
{
#line 1 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	self->priv = TRADE_SIM_DIALOGS_NEW_CHART_DIALOG_GET_PRIVATE (self);
#line 346 "NewChartDialog.c"
}


static void
trade_sim_dialogs_new_chart_dialog_finalize (GObject * obj)
{
	TradeSimDialogsNewChartDialog * self;
#line 1 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	self = G_TYPE_CHECK_INSTANCE_CAST (obj, TRADE_SIM_DIALOGS_TYPE_NEW_CHART_DIALOG, TradeSimDialogsNewChartDialog);
#line 5 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_g_object_unref0 (self->calendario);
#line 6 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_g_object_unref0 (self->time_frame);
#line 7 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_g_object_unref0 (self->acept_button);
#line 8 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	_g_object_unref0 (self->cancel_button);
#line 1 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	G_OBJECT_CLASS (trade_sim_dialogs_new_chart_dialog_parent_class)->finalize (obj);
#line 366 "NewChartDialog.c"
}


GType
trade_sim_dialogs_new_chart_dialog_get_type (void)
{
	static volatile gsize trade_sim_dialogs_new_chart_dialog_type_id__volatile = 0;
	if (g_once_init_enter (&trade_sim_dialogs_new_chart_dialog_type_id__volatile)) {
		static const GTypeInfo g_define_type_info = { sizeof (TradeSimDialogsNewChartDialogClass), (GBaseInitFunc) NULL, (GBaseFinalizeFunc) NULL, (GClassInitFunc) trade_sim_dialogs_new_chart_dialog_class_init, (GClassFinalizeFunc) NULL, NULL, sizeof (TradeSimDialogsNewChartDialog), 0, (GInstanceInitFunc) trade_sim_dialogs_new_chart_dialog_instance_init, NULL };
		GType trade_sim_dialogs_new_chart_dialog_type_id;
		trade_sim_dialogs_new_chart_dialog_type_id = g_type_register_static (gtk_dialog_get_type (), "TradeSimDialogsNewChartDialog", &g_define_type_info, 0);
		g_once_init_leave (&trade_sim_dialogs_new_chart_dialog_type_id__volatile, trade_sim_dialogs_new_chart_dialog_type_id);
	}
	return trade_sim_dialogs_new_chart_dialog_type_id__volatile;
}


static void
_vala_trade_sim_dialogs_new_chart_dialog_get_property (GObject * object,
                                                       guint property_id,
                                                       GValue * value,
                                                       GParamSpec * pspec)
{
	TradeSimDialogsNewChartDialog * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TRADE_SIM_DIALOGS_TYPE_NEW_CHART_DIALOG, TradeSimDialogsNewChartDialog);
#line 1 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	switch (property_id) {
#line 1 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
		case TRADE_SIM_DIALOGS_NEW_CHART_DIALOG_MAIN_WINDOW_PROPERTY:
#line 1 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
		g_value_set_object (value, trade_sim_dialogs_new_chart_dialog_get_main_window (self));
#line 1 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
		break;
#line 400 "NewChartDialog.c"
		default:
#line 1 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 1 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
		break;
#line 406 "NewChartDialog.c"
	}
}


static void
_vala_trade_sim_dialogs_new_chart_dialog_set_property (GObject * object,
                                                       guint property_id,
                                                       const GValue * value,
                                                       GParamSpec * pspec)
{
	TradeSimDialogsNewChartDialog * self;
	self = G_TYPE_CHECK_INSTANCE_CAST (object, TRADE_SIM_DIALOGS_TYPE_NEW_CHART_DIALOG, TradeSimDialogsNewChartDialog);
#line 1 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
	switch (property_id) {
#line 1 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
		case TRADE_SIM_DIALOGS_NEW_CHART_DIALOG_MAIN_WINDOW_PROPERTY:
#line 1 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
		trade_sim_dialogs_new_chart_dialog_set_main_window (self, g_value_get_object (value));
#line 1 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
		break;
#line 427 "NewChartDialog.c"
		default:
#line 1 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
		G_OBJECT_WARN_INVALID_PROPERTY_ID (object, property_id, pspec);
#line 1 "/home/horacio/Vala/TradeSim/src/Dialogs/NewChartDialog.vala"
		break;
#line 433 "NewChartDialog.c"
	}
}



