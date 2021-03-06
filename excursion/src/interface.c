/*
 * DO NOT EDIT THIS FILE - it is generated by Glade.
 */

#ifdef HAVE_CONFIG_H
#  include <config.h>
#endif

#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <string.h>
#include <stdio.h>

#include <gdk/gdkkeysyms.h>
#include <gtk/gtk.h>

#include "callbacks.h"
#include "interface.h"
#include "support.h"

#define GLADE_HOOKUP_OBJECT(component,widget,name) \
  g_object_set_data_full (G_OBJECT (component), name, \
    gtk_widget_ref (widget), (GDestroyNotify) gtk_widget_unref)

#define GLADE_HOOKUP_OBJECT_NO_REF(component,widget,name) \
  g_object_set_data (G_OBJECT (component), name, widget)

GtkWidget*
create_fenetre_reserve_excursion (void)
{
  GtkWidget *fenetre_reserve_excursion;
  GtkWidget *fixed1;
  GtkWidget *des_ex;
  GtkObject *jour_ex_adj;
  GtkWidget *jour_ex;
  GtkObject *mois_ex_adj;
  GtkWidget *mois_ex;
  GtkObject *annee_ex_adj;
  GtkWidget *annee_ex;
  GtkWidget *label6;
  GtkWidget *label5;
  GtkWidget *label7;
  GtkWidget *label4;
  GtkObject *nb_ex_adj;
  GtkWidget *nb_ex;
  GtkWidget *nom_ex;
  GtkWidget *prenom_ex;
  GtkWidget *label13;
  GtkWidget *label12;
  GtkWidget *label2;
  GtkWidget *label1;
  GtkWidget *label3;
  GtkWidget *res_ex;
  GtkWidget *combobox1_ex;
  GtkWidget *confirmer_rex;
  GtkWidget *alignment4;
  GtkWidget *hbox4;
  GtkWidget *image4;
  GtkWidget *label14;
  GtkWidget *retour_reserve_client_excursion;
  GtkWidget *alignment10;
  GtkWidget *hbox10;
  GtkWidget *image10;
  GtkWidget *label22;

  fenetre_reserve_excursion = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (fenetre_reserve_excursion), _("fenetre_reserve_excursion"));
  gtk_window_set_default_size (GTK_WINDOW (fenetre_reserve_excursion), 800, 400);

  fixed1 = gtk_fixed_new ();
  gtk_widget_show (fixed1);
  gtk_container_add (GTK_CONTAINER (fenetre_reserve_excursion), fixed1);

  des_ex = gtk_entry_new ();
  gtk_widget_show (des_ex);
  gtk_fixed_put (GTK_FIXED (fixed1), des_ex, 136, 88);
  gtk_widget_set_size_request (des_ex, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (des_ex), 8226);

  jour_ex_adj = gtk_adjustment_new (1, 1, 31, 1, 10, 10);
  jour_ex = gtk_spin_button_new (GTK_ADJUSTMENT (jour_ex_adj), 1, 0);
  gtk_widget_show (jour_ex);
  gtk_fixed_put (GTK_FIXED (fixed1), jour_ex, 256, 216);
  gtk_widget_set_size_request (jour_ex, 60, 27);

  mois_ex_adj = gtk_adjustment_new (1, 1, 12, 1, 10, 10);
  mois_ex = gtk_spin_button_new (GTK_ADJUSTMENT (mois_ex_adj), 1, 0);
  gtk_widget_show (mois_ex);
  gtk_fixed_put (GTK_FIXED (fixed1), mois_ex, 440, 216);
  gtk_widget_set_size_request (mois_ex, 60, 27);

  annee_ex_adj = gtk_adjustment_new (1, 1990, 2020, 1, 10, 10);
  annee_ex = gtk_spin_button_new (GTK_ADJUSTMENT (annee_ex_adj), 1, 0);
  gtk_widget_show (annee_ex);
  gtk_fixed_put (GTK_FIXED (fixed1), annee_ex, 600, 216);
  gtk_widget_set_size_request (annee_ex, 60, 27);

  label6 = gtk_label_new (_("Mois"));
  gtk_widget_show (label6);
  gtk_fixed_put (GTK_FIXED (fixed1), label6, 376, 208);
  gtk_widget_set_size_request (label6, 64, 41);

  label5 = gtk_label_new (_("Jour"));
  gtk_widget_show (label5);
  gtk_fixed_put (GTK_FIXED (fixed1), label5, 184, 208);
  gtk_widget_set_size_request (label5, 72, 41);

  label7 = gtk_label_new (_("annee"));
  gtk_widget_show (label7);
  gtk_fixed_put (GTK_FIXED (fixed1), label7, 528, 200);
  gtk_widget_set_size_request (label7, 72, 57);

  label4 = gtk_label_new (_("Date d excursion :"));
  gtk_widget_show (label4);
  gtk_fixed_put (GTK_FIXED (fixed1), label4, 16, 200);
  gtk_widget_set_size_request (label4, 160, 57);

  nb_ex_adj = gtk_adjustment_new (1, 1, 100, 1, 10, 10);
  nb_ex = gtk_spin_button_new (GTK_ADJUSTMENT (nb_ex_adj), 1, 0);
  gtk_widget_show (nb_ex);
  gtk_fixed_put (GTK_FIXED (fixed1), nb_ex, 160, 152);
  gtk_widget_set_size_request (nb_ex, 60, 27);

  nom_ex = gtk_entry_new ();
  gtk_widget_show (nom_ex);
  gtk_fixed_put (GTK_FIXED (fixed1), nom_ex, 400, 88);
  gtk_widget_set_size_request (nom_ex, 160, 27);
  gtk_entry_set_invisible_char (GTK_ENTRY (nom_ex), 8226);

  prenom_ex = gtk_entry_new ();
  gtk_widget_show (prenom_ex);
  gtk_fixed_put (GTK_FIXED (fixed1), prenom_ex, 688, 88);
  gtk_widget_set_size_request (prenom_ex, 144, 25);
  gtk_entry_set_invisible_char (GTK_ENTRY (prenom_ex), 8226);

  label13 = gtk_label_new (_("Pr\303\251nom"));
  gtk_widget_show (label13);
  gtk_fixed_put (GTK_FIXED (fixed1), label13, 608, 80);
  gtk_widget_set_size_request (label13, 80, 33);

  label12 = gtk_label_new (_("Nom"));
  gtk_widget_show (label12);
  gtk_fixed_put (GTK_FIXED (fixed1), label12, 344, 80);
  gtk_widget_set_size_request (label12, 56, 33);

  label2 = gtk_label_new (_("Destination :"));
  gtk_widget_show (label2);
  gtk_fixed_put (GTK_FIXED (fixed1), label2, 16, 80);
  gtk_widget_set_size_request (label2, 120, 41);

  label1 = gtk_label_new (_("R\303\251server"));
  gtk_widget_show (label1);
  gtk_fixed_put (GTK_FIXED (fixed1), label1, 320, 16);
  gtk_widget_set_size_request (label1, 224, 25);

  label3 = gtk_label_new (_("Nombre"));
  gtk_widget_show (label3);
  gtk_fixed_put (GTK_FIXED (fixed1), label3, 48, 144);
  gtk_widget_set_size_request (label3, 72, 33);

  res_ex = gtk_label_new ("");
  gtk_widget_show (res_ex);
  gtk_fixed_put (GTK_FIXED (fixed1), res_ex, 744, 152);
  gtk_widget_set_size_request (res_ex, 272, 96);

  combobox1_ex = gtk_combo_box_new_text ();
  gtk_widget_show (combobox1_ex);
  gtk_fixed_put (GTK_FIXED (fixed1), combobox1_ex, 376, 152);
  gtk_widget_set_size_request (combobox1_ex, 216, 31);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1_ex), _("Avec_guide_touristique"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox1_ex), _("Sans_guide_touristique"));

  confirmer_rex = gtk_button_new ();
  gtk_widget_show (confirmer_rex);
  gtk_fixed_put (GTK_FIXED (fixed1), confirmer_rex, 104, 272);
  gtk_widget_set_size_request (confirmer_rex, 160, 45);

  alignment4 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment4);
  gtk_container_add (GTK_CONTAINER (confirmer_rex), alignment4);

  hbox4 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox4);
  gtk_container_add (GTK_CONTAINER (alignment4), hbox4);

  image4 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image4);
  gtk_box_pack_start (GTK_BOX (hbox4), image4, FALSE, FALSE, 0);

  label14 = gtk_label_new_with_mnemonic (_("Confirmer"));
  gtk_widget_show (label14);
  gtk_box_pack_start (GTK_BOX (hbox4), label14, FALSE, FALSE, 0);

  retour_reserve_client_excursion = gtk_button_new ();
  gtk_widget_show (retour_reserve_client_excursion);
  gtk_fixed_put (GTK_FIXED (fixed1), retour_reserve_client_excursion, 768, 280);
  gtk_widget_set_size_request (retour_reserve_client_excursion, 128, 53);

  alignment10 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment10);
  gtk_container_add (GTK_CONTAINER (retour_reserve_client_excursion), alignment10);

  hbox10 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox10);
  gtk_container_add (GTK_CONTAINER (alignment10), hbox10);

  image10 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image10);
  gtk_box_pack_start (GTK_BOX (hbox10), image10, FALSE, FALSE, 0);

  label22 = gtk_label_new_with_mnemonic (_("Retour"));
  gtk_widget_show (label22);
  gtk_box_pack_start (GTK_BOX (hbox10), label22, FALSE, FALSE, 0);

  g_signal_connect ((gpointer) confirmer_rex, "clicked",
                    G_CALLBACK (on_confirmer_rex_clicked),
                    NULL);
  g_signal_connect ((gpointer) retour_reserve_client_excursion, "clicked",
                    G_CALLBACK (on_retour_reserve_client_excursion_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (fenetre_reserve_excursion, fenetre_reserve_excursion, "fenetre_reserve_excursion");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, fixed1, "fixed1");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, des_ex, "des_ex");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, jour_ex, "jour_ex");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, mois_ex, "mois_ex");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, annee_ex, "annee_ex");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, label6, "label6");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, label5, "label5");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, label7, "label7");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, label4, "label4");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, nb_ex, "nb_ex");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, nom_ex, "nom_ex");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, prenom_ex, "prenom_ex");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, label13, "label13");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, label12, "label12");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, label2, "label2");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, label1, "label1");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, label3, "label3");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, res_ex, "res_ex");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, combobox1_ex, "combobox1_ex");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, confirmer_rex, "confirmer_rex");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, alignment4, "alignment4");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, hbox4, "hbox4");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, image4, "image4");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, label14, "label14");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, retour_reserve_client_excursion, "retour_reserve_client_excursion");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, alignment10, "alignment10");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, hbox10, "hbox10");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, image10, "image10");
  GLADE_HOOKUP_OBJECT (fenetre_reserve_excursion, label22, "label22");

  return fenetre_reserve_excursion;
}

GtkWidget*
create_fenetre_panier_excursion (void)
{
  GtkWidget *fenetre_panier_excursion;
  GtkWidget *fixed2;
  GtkWidget *treeview_panier;
  GtkObject *idsm2_adj;
  GtkWidget *idsm2;
  GtkWidget *retour_panier_client_excursion;
  GtkWidget *alignment5;
  GtkWidget *hbox5;
  GtkWidget *image5;
  GtkWidget *label16;
  GtkWidget *modif_rexcursion;
  GtkWidget *modification;
  GtkWidget *choisir;
  GtkWidget *liste_des_reservations;
  GtkWidget *id;
  GtkWidget *actualiser_panier;
  GtkWidget *combobox_modifier_rexcursion;
  GtkWidget *modifier_reservation_excursion;
  GtkWidget *alignment11;
  GtkWidget *hbox11;
  GtkWidget *image11;
  GtkWidget *label27;
  GtkWidget *supprimer_rex;
  GtkWidget *alignment7;
  GtkWidget *hbox7;
  GtkWidget *image7;
  GtkWidget *label19;
  GtkWidget *supp_rex;
  GtkWidget *mod_rex;

  fenetre_panier_excursion = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (fenetre_panier_excursion), _("fenetre_panier_excursion"));

  fixed2 = gtk_fixed_new ();
  gtk_widget_show (fixed2);
  gtk_container_add (GTK_CONTAINER (fenetre_panier_excursion), fixed2);

  treeview_panier = gtk_tree_view_new ();
  gtk_widget_show (treeview_panier);
  gtk_fixed_put (GTK_FIXED (fixed2), treeview_panier, 224, 88);
  gtk_widget_set_size_request (treeview_panier, 1136, 304);
  gtk_container_set_border_width (GTK_CONTAINER (treeview_panier), 265);

  idsm2_adj = gtk_adjustment_new (1, 0, 100, 1, 10, 10);
  idsm2 = gtk_spin_button_new (GTK_ADJUSTMENT (idsm2_adj), 1, 0);
  gtk_widget_show (idsm2);
  gtk_fixed_put (GTK_FIXED (fixed2), idsm2, 368, 440);
  gtk_widget_set_size_request (idsm2, 60, 27);

  retour_panier_client_excursion = gtk_button_new ();
  gtk_widget_show (retour_panier_client_excursion);
  gtk_fixed_put (GTK_FIXED (fixed2), retour_panier_client_excursion, 1440, 608);
  gtk_widget_set_size_request (retour_panier_client_excursion, 112, 37);

  alignment5 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment5);
  gtk_container_add (GTK_CONTAINER (retour_panier_client_excursion), alignment5);

  hbox5 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox5);
  gtk_container_add (GTK_CONTAINER (alignment5), hbox5);

  image5 = gtk_image_new_from_stock ("gtk-undo", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image5);
  gtk_box_pack_start (GTK_BOX (hbox5), image5, FALSE, FALSE, 0);

  label16 = gtk_label_new_with_mnemonic (_("Retour"));
  gtk_widget_show (label16);
  gtk_box_pack_start (GTK_BOX (hbox5), label16, FALSE, FALSE, 0);

  modif_rexcursion = gtk_entry_new ();
  gtk_widget_show (modif_rexcursion);
  gtk_fixed_put (GTK_FIXED (fixed2), modif_rexcursion, 912, 536);
  gtk_widget_set_size_request (modif_rexcursion, 184, 43);
  gtk_entry_set_invisible_char (GTK_ENTRY (modif_rexcursion), 8226);

  modification = gtk_label_new (_("Modification :"));
  gtk_widget_show (modification);
  gtk_fixed_put (GTK_FIXED (fixed2), modification, 792, 528);
  gtk_widget_set_size_request (modification, 112, 57);

  choisir = gtk_label_new (_("Choisir :"));
  gtk_widget_show (choisir);
  gtk_fixed_put (GTK_FIXED (fixed2), choisir, 792, 448);
  gtk_widget_set_size_request (choisir, 96, 49);

  liste_des_reservations = gtk_label_new (_("Liste des r\303\251servations"));
  gtk_widget_show (liste_des_reservations);
  gtk_fixed_put (GTK_FIXED (fixed2), liste_des_reservations, 672, 40);
  gtk_widget_set_size_request (liste_des_reservations, 184, 17);

  id = gtk_label_new (_("                          Id \nmodification/suppresion"));
  gtk_widget_show (id);
  gtk_fixed_put (GTK_FIXED (fixed2), id, 176, 408);
  gtk_widget_set_size_request (id, 192, 97);

  actualiser_panier = gtk_button_new_with_mnemonic (_("Actualiser"));
  gtk_widget_show (actualiser_panier);
  gtk_fixed_put (GTK_FIXED (fixed2), actualiser_panier, 1392, 16);
  gtk_widget_set_size_request (actualiser_panier, 144, 45);

  combobox_modifier_rexcursion = gtk_combo_box_new_text ();
  gtk_widget_show (combobox_modifier_rexcursion);
  gtk_fixed_put (GTK_FIXED (fixed2), combobox_modifier_rexcursion, 904, 440);
  gtk_widget_set_size_request (combobox_modifier_rexcursion, 192, 71);
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox_modifier_rexcursion), _("Date"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox_modifier_rexcursion), _("Destination"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox_modifier_rexcursion), _("Nom"));
  gtk_combo_box_append_text (GTK_COMBO_BOX (combobox_modifier_rexcursion), _("Prenom"));

  modifier_reservation_excursion = gtk_button_new ();
  gtk_widget_show (modifier_reservation_excursion);
  gtk_fixed_put (GTK_FIXED (fixed2), modifier_reservation_excursion, 944, 600);
  gtk_widget_set_size_request (modifier_reservation_excursion, 128, 45);

  alignment11 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment11);
  gtk_container_add (GTK_CONTAINER (modifier_reservation_excursion), alignment11);

  hbox11 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox11);
  gtk_container_add (GTK_CONTAINER (alignment11), hbox11);

  image11 = gtk_image_new_from_stock ("gtk-edit", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image11);
  gtk_box_pack_start (GTK_BOX (hbox11), image11, FALSE, FALSE, 0);

  label27 = gtk_label_new_with_mnemonic (_("Modifier"));
  gtk_widget_show (label27);
  gtk_box_pack_start (GTK_BOX (hbox11), label27, FALSE, FALSE, 0);

  supprimer_rex = gtk_button_new ();
  gtk_widget_show (supprimer_rex);
  gtk_fixed_put (GTK_FIXED (fixed2), supprimer_rex, 280, 496);
  gtk_widget_set_size_request (supprimer_rex, 176, 61);

  alignment7 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment7);
  gtk_container_add (GTK_CONTAINER (supprimer_rex), alignment7);

  hbox7 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox7);
  gtk_container_add (GTK_CONTAINER (alignment7), hbox7);

  image7 = gtk_image_new_from_stock ("gtk-cancel", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image7);
  gtk_box_pack_start (GTK_BOX (hbox7), image7, FALSE, FALSE, 0);

  label19 = gtk_label_new_with_mnemonic (_("Annuler r\303\251servation"));
  gtk_widget_show (label19);
  gtk_box_pack_start (GTK_BOX (hbox7), label19, FALSE, FALSE, 0);

  supp_rex = gtk_label_new ("");
  gtk_widget_show (supp_rex);
  gtk_fixed_put (GTK_FIXED (fixed2), supp_rex, 488, 408);
  gtk_widget_set_size_request (supp_rex, 256, 105);

  mod_rex = gtk_label_new ("");
  gtk_widget_show (mod_rex);
  gtk_fixed_put (GTK_FIXED (fixed2), mod_rex, 1168, 408);
  gtk_widget_set_size_request (mod_rex, 208, 89);

  g_signal_connect ((gpointer) retour_panier_client_excursion, "clicked",
                    G_CALLBACK (on_retour_panier_client_excursion_clicked),
                    NULL);
  g_signal_connect ((gpointer) actualiser_panier, "clicked",
                    G_CALLBACK (on_actualiser_panier_clicked),
                    NULL);
  g_signal_connect ((gpointer) modifier_reservation_excursion, "clicked",
                    G_CALLBACK (on_modifier_reservation_excursion_clicked),
                    NULL);
  g_signal_connect ((gpointer) supprimer_rex, "clicked",
                    G_CALLBACK (on_supprimer_rex_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (fenetre_panier_excursion, fenetre_panier_excursion, "fenetre_panier_excursion");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, fixed2, "fixed2");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, treeview_panier, "treeview_panier");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, idsm2, "idsm2");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, retour_panier_client_excursion, "retour_panier_client_excursion");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, alignment5, "alignment5");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, hbox5, "hbox5");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, image5, "image5");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, label16, "label16");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, modif_rexcursion, "modif_rexcursion");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, modification, "modification");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, choisir, "choisir");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, liste_des_reservations, "liste_des_reservations");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, id, "id");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, actualiser_panier, "actualiser_panier");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, combobox_modifier_rexcursion, "combobox_modifier_rexcursion");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, modifier_reservation_excursion, "modifier_reservation_excursion");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, alignment11, "alignment11");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, hbox11, "hbox11");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, image11, "image11");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, label27, "label27");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, supprimer_rex, "supprimer_rex");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, alignment7, "alignment7");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, hbox7, "hbox7");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, image7, "image7");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, label19, "label19");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, supp_rex, "supp_rex");
  GLADE_HOOKUP_OBJECT (fenetre_panier_excursion, mod_rex, "mod_rex");

  return fenetre_panier_excursion;
}

GtkWidget*
create_fenetre_client_excursion (void)
{
  GtkWidget *fenetre_client_excursion;
  GtkWidget *fixed3;
  GtkWidget *treeview_excursion_client;
  GtkWidget *chercher_client_excursion;
  GtkWidget *rechercher_client_excursion;
  GtkWidget *image12;
  GtkWidget *afficher_client_excursion;
  GtkWidget *alignment12;
  GtkWidget *hbox12;
  GtkWidget *image13;
  GtkWidget *label28;
  GtkWidget *liste_des_excursions;
  GtkWidget *panier_excursion;
  GtkWidget *alignment9;
  GtkWidget *hbox9;
  GtkWidget *image9;
  GtkWidget *label21;
  GtkWidget *reserver_excursion_client;
  GtkWidget *alignment8;
  GtkWidget *hbox8;
  GtkWidget *image8;
  GtkWidget *label20;
  GtkWidget *Page_d_accueille;

  fenetre_client_excursion = gtk_window_new (GTK_WINDOW_TOPLEVEL);
  gtk_window_set_title (GTK_WINDOW (fenetre_client_excursion), _("fenetre_client_excursion"));

  fixed3 = gtk_fixed_new ();
  gtk_widget_show (fixed3);
  gtk_container_add (GTK_CONTAINER (fenetre_client_excursion), fixed3);

  treeview_excursion_client = gtk_tree_view_new ();
  gtk_widget_show (treeview_excursion_client);
  gtk_fixed_put (GTK_FIXED (fixed3), treeview_excursion_client, 88, 160);
  gtk_widget_set_size_request (treeview_excursion_client, 736, 368);

  chercher_client_excursion = gtk_entry_new ();
  gtk_widget_show (chercher_client_excursion);
  gtk_fixed_put (GTK_FIXED (fixed3), chercher_client_excursion, 384, 16);
  gtk_widget_set_size_request (chercher_client_excursion, 168, 35);
  gtk_entry_set_invisible_char (GTK_ENTRY (chercher_client_excursion), 8226);

  rechercher_client_excursion = gtk_button_new ();
  gtk_widget_show (rechercher_client_excursion);
  gtk_fixed_put (GTK_FIXED (fixed3), rechercher_client_excursion, 576, 16);
  gtk_widget_set_size_request (rechercher_client_excursion, 66, 29);

  image12 = gtk_image_new_from_stock ("gtk-find", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image12);
  gtk_container_add (GTK_CONTAINER (rechercher_client_excursion), image12);

  afficher_client_excursion = gtk_button_new ();
  gtk_widget_show (afficher_client_excursion);
  gtk_fixed_put (GTK_FIXED (fixed3), afficher_client_excursion, 688, 8);
  gtk_widget_set_size_request (afficher_client_excursion, 112, 45);

  alignment12 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment12);
  gtk_container_add (GTK_CONTAINER (afficher_client_excursion), alignment12);

  hbox12 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox12);
  gtk_container_add (GTK_CONTAINER (alignment12), hbox12);

  image13 = gtk_image_new_from_stock ("gtk-about", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image13);
  gtk_box_pack_start (GTK_BOX (hbox12), image13, FALSE, FALSE, 0);

  label28 = gtk_label_new_with_mnemonic (_("Afficher"));
  gtk_widget_show (label28);
  gtk_box_pack_start (GTK_BOX (hbox12), label28, FALSE, FALSE, 0);

  liste_des_excursions = gtk_label_new (_("Liste des excursions"));
  gtk_widget_show (liste_des_excursions);
  gtk_fixed_put (GTK_FIXED (fixed3), liste_des_excursions, 344, 104);
  gtk_widget_set_size_request (liste_des_excursions, 200, 57);

  panier_excursion = gtk_button_new ();
  gtk_widget_show (panier_excursion);
  gtk_fixed_put (GTK_FIXED (fixed3), panier_excursion, 768, 576);
  gtk_widget_set_size_request (panier_excursion, 136, 53);

  alignment9 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment9);
  gtk_container_add (GTK_CONTAINER (panier_excursion), alignment9);

  hbox9 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox9);
  gtk_container_add (GTK_CONTAINER (alignment9), hbox9);

  image9 = gtk_image_new_from_stock ("gtk-undelete", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image9);
  gtk_box_pack_start (GTK_BOX (hbox9), image9, FALSE, FALSE, 0);

  label21 = gtk_label_new_with_mnemonic (_("Panier"));
  gtk_widget_show (label21);
  gtk_box_pack_start (GTK_BOX (hbox9), label21, FALSE, FALSE, 0);

  reserver_excursion_client = gtk_button_new ();
  gtk_widget_show (reserver_excursion_client);
  gtk_fixed_put (GTK_FIXED (fixed3), reserver_excursion_client, 152, 584);
  gtk_widget_set_size_request (reserver_excursion_client, 144, 53);

  alignment8 = gtk_alignment_new (0.5, 0.5, 0, 0);
  gtk_widget_show (alignment8);
  gtk_container_add (GTK_CONTAINER (reserver_excursion_client), alignment8);

  hbox8 = gtk_hbox_new (FALSE, 2);
  gtk_widget_show (hbox8);
  gtk_container_add (GTK_CONTAINER (alignment8), hbox8);

  image8 = gtk_image_new_from_stock ("gtk-apply", GTK_ICON_SIZE_BUTTON);
  gtk_widget_show (image8);
  gtk_box_pack_start (GTK_BOX (hbox8), image8, FALSE, FALSE, 0);

  label20 = gtk_label_new_with_mnemonic (_("R\303\251server"));
  gtk_widget_show (label20);
  gtk_box_pack_start (GTK_BOX (hbox8), label20, FALSE, FALSE, 0);

  Page_d_accueille = gtk_label_new (_("Page d'acceueille :"));
  gtk_widget_show (Page_d_accueille);
  gtk_fixed_put (GTK_FIXED (fixed3), Page_d_accueille, 0, 0);
  gtk_widget_set_size_request (Page_d_accueille, 160, 48);

  g_signal_connect ((gpointer) rechercher_client_excursion, "clicked",
                    G_CALLBACK (on_rechercher_client_excursion_clicked),
                    NULL);
  g_signal_connect ((gpointer) afficher_client_excursion, "clicked",
                    G_CALLBACK (on_afficher_client_excursion_clicked),
                    NULL);
  g_signal_connect ((gpointer) panier_excursion, "clicked",
                    G_CALLBACK (on_panier_excursion_clicked),
                    NULL);
  g_signal_connect ((gpointer) reserver_excursion_client, "clicked",
                    G_CALLBACK (on_reserver_excursion_client_clicked),
                    NULL);

  /* Store pointers to all widgets, for use by lookup_widget(). */
  GLADE_HOOKUP_OBJECT_NO_REF (fenetre_client_excursion, fenetre_client_excursion, "fenetre_client_excursion");
  GLADE_HOOKUP_OBJECT (fenetre_client_excursion, fixed3, "fixed3");
  GLADE_HOOKUP_OBJECT (fenetre_client_excursion, treeview_excursion_client, "treeview_excursion_client");
  GLADE_HOOKUP_OBJECT (fenetre_client_excursion, chercher_client_excursion, "chercher_client_excursion");
  GLADE_HOOKUP_OBJECT (fenetre_client_excursion, rechercher_client_excursion, "rechercher_client_excursion");
  GLADE_HOOKUP_OBJECT (fenetre_client_excursion, image12, "image12");
  GLADE_HOOKUP_OBJECT (fenetre_client_excursion, afficher_client_excursion, "afficher_client_excursion");
  GLADE_HOOKUP_OBJECT (fenetre_client_excursion, alignment12, "alignment12");
  GLADE_HOOKUP_OBJECT (fenetre_client_excursion, hbox12, "hbox12");
  GLADE_HOOKUP_OBJECT (fenetre_client_excursion, image13, "image13");
  GLADE_HOOKUP_OBJECT (fenetre_client_excursion, label28, "label28");
  GLADE_HOOKUP_OBJECT (fenetre_client_excursion, liste_des_excursions, "liste_des_excursions");
  GLADE_HOOKUP_OBJECT (fenetre_client_excursion, panier_excursion, "panier_excursion");
  GLADE_HOOKUP_OBJECT (fenetre_client_excursion, alignment9, "alignment9");
  GLADE_HOOKUP_OBJECT (fenetre_client_excursion, hbox9, "hbox9");
  GLADE_HOOKUP_OBJECT (fenetre_client_excursion, image9, "image9");
  GLADE_HOOKUP_OBJECT (fenetre_client_excursion, label21, "label21");
  GLADE_HOOKUP_OBJECT (fenetre_client_excursion, reserver_excursion_client, "reserver_excursion_client");
  GLADE_HOOKUP_OBJECT (fenetre_client_excursion, alignment8, "alignment8");
  GLADE_HOOKUP_OBJECT (fenetre_client_excursion, hbox8, "hbox8");
  GLADE_HOOKUP_OBJECT (fenetre_client_excursion, image8, "image8");
  GLADE_HOOKUP_OBJECT (fenetre_client_excursion, label20, "label20");
  GLADE_HOOKUP_OBJECT (fenetre_client_excursion, Page_d_accueille, "Page_d_accueille");

  return fenetre_client_excursion;
}

