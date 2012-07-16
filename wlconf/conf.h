/*
 * This file is part of wl1271
 *
 * Copyright (C) 2009 Nokia Corporation
 *
 * Contact: Luciano Coelho <luciano.coelho@nokia.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * version 2 as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA
 * 02110-1301 USA
 *
 */

#ifndef __CONF_H__
#define __CONF_H__

enum {
	CONF_HW_BIT_RATE_1MBPS   = BIT(0),
	CONF_HW_BIT_RATE_2MBPS   = BIT(1),
	CONF_HW_BIT_RATE_5_5MBPS = BIT(2),
	CONF_HW_BIT_RATE_6MBPS   = BIT(3),
	CONF_HW_BIT_RATE_9MBPS   = BIT(4),
	CONF_HW_BIT_RATE_11MBPS  = BIT(5),
	CONF_HW_BIT_RATE_12MBPS  = BIT(6),
	CONF_HW_BIT_RATE_18MBPS  = BIT(7),
	CONF_HW_BIT_RATE_22MBPS  = BIT(8),
	CONF_HW_BIT_RATE_24MBPS  = BIT(9),
	CONF_HW_BIT_RATE_36MBPS  = BIT(10),
	CONF_HW_BIT_RATE_48MBPS  = BIT(11),
	CONF_HW_BIT_RATE_54MBPS  = BIT(12),
	CONF_HW_BIT_RATE_MCS_0   = BIT(13),
	CONF_HW_BIT_RATE_MCS_1   = BIT(14),
	CONF_HW_BIT_RATE_MCS_2   = BIT(15),
	CONF_HW_BIT_RATE_MCS_3   = BIT(16),
	CONF_HW_BIT_RATE_MCS_4   = BIT(17),
	CONF_HW_BIT_RATE_MCS_5   = BIT(18),
	CONF_HW_BIT_RATE_MCS_6   = BIT(19),
	CONF_HW_BIT_RATE_MCS_7   = BIT(20),
	CONF_HW_BIT_RATE_MCS_8   = BIT(21),
	CONF_HW_BIT_RATE_MCS_9   = BIT(22),
	CONF_HW_BIT_RATE_MCS_10  = BIT(23),
	CONF_HW_BIT_RATE_MCS_11  = BIT(24),
	CONF_HW_BIT_RATE_MCS_12  = BIT(25),
	CONF_HW_BIT_RATE_MCS_13  = BIT(26),
	CONF_HW_BIT_RATE_MCS_14  = BIT(27),
	CONF_HW_BIT_RATE_MCS_15  = BIT(28),
};

enum {
	CONF_HW_RATE_INDEX_1MBPS   = 0,
	CONF_HW_RATE_INDEX_2MBPS   = 1,
	CONF_HW_RATE_INDEX_5_5MBPS = 2,
	CONF_HW_RATE_INDEX_6MBPS   = 3,
	CONF_HW_RATE_INDEX_9MBPS   = 4,
	CONF_HW_RATE_INDEX_11MBPS  = 5,
	CONF_HW_RATE_INDEX_12MBPS  = 6,
	CONF_HW_RATE_INDEX_18MBPS  = 7,
	CONF_HW_RATE_INDEX_22MBPS  = 8,
	CONF_HW_RATE_INDEX_24MBPS  = 9,
	CONF_HW_RATE_INDEX_36MBPS  = 10,
	CONF_HW_RATE_INDEX_48MBPS  = 11,
	CONF_HW_RATE_INDEX_54MBPS  = 12,
	CONF_HW_RATE_INDEX_MAX     = CONF_HW_RATE_INDEX_54MBPS,
};

#define CONF_HW_RXTX_RATE_UNSUPPORTED 0xff

enum {
	CONF_SG_DISABLE = 0,
	CONF_SG_PROTECTIVE,
	CONF_SG_OPPORTUNISTIC
};

enum {
	/*
	 * Configure the min and max time BT gains the antenna
	 * in WLAN / BT master basic rate
	 *
	 * Range: 0 - 255 (ms)
	 */
	CONF_SG_ACL_BT_MASTER_MIN_BR = 0,
	CONF_SG_ACL_BT_MASTER_MAX_BR,

	/*
	 * Configure the min and max time BT gains the antenna
	 * in WLAN / BT slave basic rate
	 *
	 * Range: 0 - 255 (ms)
	 */
	CONF_SG_ACL_BT_SLAVE_MIN_BR,
	CONF_SG_ACL_BT_SLAVE_MAX_BR,

	/*
	 * Configure the min and max time BT gains the antenna
	 * in WLAN / BT master EDR
	 *
	 * Range: 0 - 255 (ms)
	 */
	CONF_SG_ACL_BT_MASTER_MIN_EDR,
	CONF_SG_ACL_BT_MASTER_MAX_EDR,

	/*
	 * Configure the min and max time BT gains the antenna
	 * in WLAN / BT slave EDR
	 *
	 * Range: 0 - 255 (ms)
	 */
	CONF_SG_ACL_BT_SLAVE_MIN_EDR,
	CONF_SG_ACL_BT_SLAVE_MAX_EDR,

	/*
	 * The maximum time WLAN can gain the antenna
	 * in WLAN PSM / BT master/slave BR
	 *
	 * Range: 0 - 255 (ms)
	 */
	CONF_SG_ACL_WLAN_PS_MASTER_BR,
	CONF_SG_ACL_WLAN_PS_SLAVE_BR,

	/*
	 * The maximum time WLAN can gain the antenna
	 * in WLAN PSM / BT master/slave EDR
	 *
	 * Range: 0 - 255 (ms)
	 */
	CONF_SG_ACL_WLAN_PS_MASTER_EDR,
	CONF_SG_ACL_WLAN_PS_SLAVE_EDR,

	/* TODO: explain these values */
	CONF_SG_ACL_WLAN_ACTIVE_MASTER_MIN_BR,
	CONF_SG_ACL_WLAN_ACTIVE_MASTER_MAX_BR,
	CONF_SG_ACL_WLAN_ACTIVE_SLAVE_MIN_BR,
	CONF_SG_ACL_WLAN_ACTIVE_SLAVE_MAX_BR,
	CONF_SG_ACL_WLAN_ACTIVE_MASTER_MIN_EDR,
	CONF_SG_ACL_WLAN_ACTIVE_MASTER_MAX_EDR,
	CONF_SG_ACL_WLAN_ACTIVE_SLAVE_MIN_EDR,
	CONF_SG_ACL_WLAN_ACTIVE_SLAVE_MAX_EDR,

	CONF_SG_ACL_ACTIVE_SCAN_WLAN_BR,
	CONF_SG_ACL_ACTIVE_SCAN_WLAN_EDR,
	CONF_SG_ACL_PASSIVE_SCAN_BT_BR,
	CONF_SG_ACL_PASSIVE_SCAN_WLAN_BR,
	CONF_SG_ACL_PASSIVE_SCAN_BT_EDR,
	CONF_SG_ACL_PASSIVE_SCAN_WLAN_EDR,

	/*
	 * Compensation percentage of probe requests when scan initiated
	 * during BT voice/ACL link.
	 *
	 * Range: 0 - 255 (%)
	 */
	CONF_SG_AUTO_SCAN_PROBE_REQ,

	/*
	 * Compensation percentage of probe requests when active scan initiated
	 * during BT voice
	 *
	 * Range: 0 - 255 (%)
	 */
	CONF_SG_ACTIVE_SCAN_DURATION_FACTOR_HV3,

	/*
	 * Compensation percentage of WLAN active scan window if initiated
	 * during BT A2DP
	 *
	 * Range: 0 - 1000 (%)
	 */
	CONF_SG_ACTIVE_SCAN_DURATION_FACTOR_A2DP,

	/*
	 * Compensation percentage of WLAN passive scan window if initiated
	 * during BT A2DP BR
	 *
	 * Range: 0 - 1000 (%)
	 */
	CONF_SG_PASSIVE_SCAN_DURATION_FACTOR_A2DP_BR,

	/*
	 * Compensation percentage of WLAN passive scan window if initiated
	 * during BT A2DP EDR
	 *
	 * Range: 0 - 1000 (%)
	 */
	CONF_SG_PASSIVE_SCAN_DURATION_FACTOR_A2DP_EDR,

	/*
	 * Compensation percentage of WLAN passive scan window if initiated
	 * during BT voice
	 *
	 * Range: 0 - 1000 (%)
	 */
	CONF_SG_PASSIVE_SCAN_DURATION_FACTOR_HV3,

	/* TODO: explain these values */
	CONF_SG_CONSECUTIVE_HV3_IN_PASSIVE_SCAN,
	CONF_SG_BCN_HV3_COLLISION_THRESH_IN_PASSIVE_SCAN,
	CONF_SG_TX_RX_PROTECTION_BWIDTH_IN_PASSIVE_SCAN,

	/*
	 * Defines whether the SG will force WLAN host to enter/exit PSM
	 *
	 * Range: 1 - SG can force, 0 - host handles PSM
	 */
	CONF_SG_STA_FORCE_PS_IN_BT_SCO,

	/*
	 * Defines antenna configuration (single/dual antenna)
	 *
	 * Range: 0 - single antenna, 1 - dual antenna
	 */
	CONF_SG_ANTENNA_CONFIGURATION,

	/*
	 * The threshold (percent) of max consecutive beacon misses before
	 * increasing priority of beacon reception.
	 *
	 * Range: 0 - 100 (%)
	 */
	CONF_SG_BEACON_MISS_PERCENT,

	/*
	 * Protection time of the DHCP procedure.
	 *
	 * Range: 0 - 100000 (ms)
	 */
	CONF_SG_DHCP_TIME,

	/*
	 * RX guard time before the beginning of a new BT voice frame during
	 * which no new WLAN trigger frame is transmitted.
	 *
	 * Range: 0 - 100000 (us)
	 */
	CONF_SG_RXT,

	/*
	 * TX guard time before the beginning of a new BT voice frame during
	 * which no new WLAN frame is transmitted.
	 *
	 * Range: 0 - 100000 (us)
	 */

	CONF_SG_TXT,

	/*
	 * Enable adaptive RXT/TXT algorithm. If disabled, the host values
	 * will be utilized.
	 *
	 * Range: 0 - disable, 1 - enable
	 */
	CONF_SG_ADAPTIVE_RXT_TXT,

	/* TODO: explain this value */
	CONF_SG_GENERAL_USAGE_BIT_MAP,

	/*
	 * Number of consecutive BT voice frames not interrupted by WLAN
	 *
	 * Range: 0 - 100
	 */
	CONF_SG_HV3_MAX_SERVED,

	/*
	 * The used WLAN legacy service period during active BT ACL link
	 *
	 * Range: 0 - 255 (ms)
	 */
	CONF_SG_PS_POLL_TIMEOUT,

	/*
	 * The used WLAN UPSD service period during active BT ACL link
	 *
	 * Range: 0 - 255 (ms)
	 */
	CONF_SG_UPSD_TIMEOUT,

	CONF_SG_CONSECUTIVE_CTS_THRESHOLD,
	CONF_SG_STA_RX_WINDOW_AFTER_DTIM,
	CONF_SG_STA_CONNECTION_PROTECTION_TIME,

	/* AP params */
	CONF_AP_BEACON_MISS_TX,
	CONF_AP_RX_WINDOW_AFTER_BEACON,
	CONF_AP_BEACON_WINDOW_INTERVAL,
	CONF_AP_CONNECTION_PROTECTION_TIME,
	CONF_AP_BT_ACL_VAL_BT_SERVE_TIME,
	CONF_AP_BT_ACL_VAL_WL_SERVE_TIME,

	/* CTS Diluting params */
	CONF_SG_CTS_DILUTED_BAD_RX_PACKETS_TH,
	CONF_SG_CTS_CHOP_IN_DUAL_ANT_SCO_MASTER,

	CONF_SG_TEMP_PARAM_1,
	CONF_SG_TEMP_PARAM_2,
	CONF_SG_TEMP_PARAM_3,
	CONF_SG_TEMP_PARAM_4,
	CONF_SG_TEMP_PARAM_5,
	CONF_SG_TEMP_PARAM_6,
	CONF_SG_TEMP_PARAM_7,
	CONF_SG_TEMP_PARAM_8,
	CONF_SG_TEMP_PARAM_9,
	CONF_SG_TEMP_PARAM_10,

	CONF_SG_PARAMS_MAX,
	CONF_SG_PARAMS_ALL = 0xff
};

struct conf_sg_settings {
	u32 params[67];
	u8 state;
} __packed;

enum conf_rx_queue_type {
	CONF_RX_QUEUE_TYPE_LOW_PRIORITY,  /* All except the high priority */
	CONF_RX_QUEUE_TYPE_HIGH_PRIORITY, /* Management and voice packets */
};

struct conf_rx_settings {
	/*
	 * The maximum amount of time, in TU, before the
	 * firmware discards the MSDU.
	 *
	 * Range: 0 - 0xFFFFFFFF
	 */
	u32 rx_msdu_life_time;

	/*
	 * Packet detection threshold in the PHY.
	 *
	 * FIXME: details unknown.
	 */
	u32 packet_detection_threshold;

	/*
	 * The longest time the STA will wait to receive traffic from the AP
	 * after a PS-poll has been transmitted.
	 *
	 * Range: 0 - 200000
	 */
	u16 ps_poll_timeout;
	/*
	 * The longest time the STA will wait to receive traffic from the AP
	 * after a frame has been sent from an UPSD enabled queue.
	 *
	 * Range: 0 - 200000
	 */
	u16 upsd_timeout;

	/*
	 * The number of octets in an MPDU, below which an RTS/CTS
	 * handshake is not performed.
	 *
	 * Range: 0 - 4096
	 */
	u16 rts_threshold;

	/*
	 * The RX Clear Channel Assessment threshold in the PHY
	 * (the energy threshold).
	 *
	 * Range: ENABLE_ENERGY_D  == 0x140A
	 *        DISABLE_ENERGY_D == 0xFFEF
	 */
	u16 rx_cca_threshold;

	/*
	 * Occupied Rx mem-blocks number which requires interrupting the host
	 * (0 = no buffering, 0xffff = disabled).
	 *
	 * Range: u16
	 */
	u16 irq_blk_threshold;

	/*
	 * Rx packets number which requires interrupting the host
	 * (0 = no buffering).
	 *
	 * Range: u16
	 */
	u16 irq_pkt_threshold;

	/*
	 * Max time in msec the FW may delay RX-Complete interrupt.
	 *
	 * Range: 1 - 100
	 */
	u16 irq_timeout;

	/*
	 * The RX queue type.
	 *
	 * Range: RX_QUEUE_TYPE_RX_LOW_PRIORITY, RX_QUEUE_TYPE_RX_HIGH_PRIORITY,
	 */
	u8 queue_type;
} __packed;

#define CONF_TX_MAX_RATE_CLASSES       10

#define CONF_TX_RATE_MASK_UNSPECIFIED  0
#define CONF_TX_RATE_MASK_BASIC        (CONF_HW_BIT_RATE_1MBPS | \
					CONF_HW_BIT_RATE_2MBPS)
#define CONF_TX_RATE_RETRY_LIMIT       10

/* basic rates for p2p operations (probe req/resp, etc.) */
#define CONF_TX_RATE_MASK_BASIC_P2P    (CONF_HW_BIT_RATE_6MBPS | \
	CONF_HW_BIT_RATE_12MBPS | CONF_HW_BIT_RATE_24MBPS)

/*
 * Rates supported for data packets when operating as AP. Note the absence
 * of the 22Mbps rate. There is a FW limitation on 12 rates so we must drop
 * one. The rate dropped is not mandatory under any operating mode.
 */
#define CONF_TX_AP_ENABLED_RATES       (CONF_HW_BIT_RATE_1MBPS | \
	CONF_HW_BIT_RATE_2MBPS | CONF_HW_BIT_RATE_5_5MBPS |      \
	CONF_HW_BIT_RATE_6MBPS | CONF_HW_BIT_RATE_9MBPS |        \
	CONF_HW_BIT_RATE_11MBPS | CONF_HW_BIT_RATE_12MBPS |      \
	CONF_HW_BIT_RATE_18MBPS | CONF_HW_BIT_RATE_24MBPS |      \
	CONF_HW_BIT_RATE_36MBPS | CONF_HW_BIT_RATE_48MBPS |      \
	CONF_HW_BIT_RATE_54MBPS)

#define CONF_TX_CCK_RATES  (CONF_HW_BIT_RATE_1MBPS |		\
	CONF_HW_BIT_RATE_2MBPS | CONF_HW_BIT_RATE_5_5MBPS |	\
	CONF_HW_BIT_RATE_11MBPS)

#define CONF_TX_OFDM_RATES (CONF_HW_BIT_RATE_6MBPS |             \
	CONF_HW_BIT_RATE_12MBPS | CONF_HW_BIT_RATE_24MBPS |      \
	CONF_HW_BIT_RATE_36MBPS | CONF_HW_BIT_RATE_48MBPS |      \
	CONF_HW_BIT_RATE_54MBPS)

#define CONF_TX_MCS_RATES (CONF_HW_BIT_RATE_MCS_0 |              \
	CONF_HW_BIT_RATE_MCS_1 | CONF_HW_BIT_RATE_MCS_2 |        \
	CONF_HW_BIT_RATE_MCS_3 | CONF_HW_BIT_RATE_MCS_4 |        \
	CONF_HW_BIT_RATE_MCS_5 | CONF_HW_BIT_RATE_MCS_6 |        \
	CONF_HW_BIT_RATE_MCS_7)

#define CONF_TX_MIMO_RATES (CONF_HW_BIT_RATE_MCS_8 |             \
	CONF_HW_BIT_RATE_MCS_9 | CONF_HW_BIT_RATE_MCS_10 |       \
	CONF_HW_BIT_RATE_MCS_11 | CONF_HW_BIT_RATE_MCS_12 |      \
	CONF_HW_BIT_RATE_MCS_13 | CONF_HW_BIT_RATE_MCS_14 |      \
	CONF_HW_BIT_RATE_MCS_15)

/*
 * Default rates for management traffic when operating in AP mode. This
 * should be configured according to the basic rate set of the AP
 */
#define CONF_TX_AP_DEFAULT_MGMT_RATES  (CONF_HW_BIT_RATE_1MBPS | \
	CONF_HW_BIT_RATE_2MBPS | CONF_HW_BIT_RATE_5_5MBPS)

/* default rates for working as IBSS (11b and OFDM) */
#define CONF_TX_IBSS_DEFAULT_RATES  (CONF_HW_BIT_RATE_1MBPS |       \
		CONF_HW_BIT_RATE_2MBPS | CONF_HW_BIT_RATE_5_5MBPS | \
		CONF_HW_BIT_RATE_11MBPS | CONF_TX_OFDM_RATES);

struct conf_tx_rate_class {

	/*
	 * The rates enabled for this rate class.
	 *
	 * Range: CONF_HW_BIT_RATE_* bit mask
	 */
	u32 enabled_rates;

	/*
	 * The dot11 short retry limit used for TX retries.
	 *
	 * Range: u8
	 */
	u8 short_retry_limit;

	/*
	 * The dot11 long retry limit used for TX retries.
	 *
	 * Range: u8
	 */
	u8 long_retry_limit;

	/*
	 * Flags controlling the attributes of TX transmission.
	 *
	 * Range: bit 0: Truncate - when set, FW attempts to send a frame stop
	 *               when the total valid per-rate attempts have
	 *               been exhausted; otherwise transmissions
	 *               will continue at the lowest available rate
	 *               until the appropriate one of the
	 *               short_retry_limit, long_retry_limit,
	 *               dot11_max_transmit_msdu_life_time, or
	 *               max_tx_life_time, is exhausted.
	 *            1: Preamble Override - indicates if the preamble type
	 *               should be used in TX.
	 *            2: Preamble Type - the type of the preamble to be used by
	 *               the policy (0 - long preamble, 1 - short preamble.
	 */
	u8 aflags;
} __packed;

#define CONF_TX_MAX_AC_COUNT 4

/* Slot number setting to start transmission at PIFS interval */
#define CONF_TX_AIFS_PIFS 1
/* Slot number setting to start transmission at DIFS interval normal
 * DCF access */
#define CONF_TX_AIFS_DIFS 2


enum conf_tx_ac {
	CONF_TX_AC_BE = 0,         /* best effort / legacy */
	CONF_TX_AC_BK = 1,         /* background */
	CONF_TX_AC_VI = 2,         /* video */
	CONF_TX_AC_VO = 3,         /* voice */
	CONF_TX_AC_CTS2SELF = 4,   /* fictitious AC, follows AC_VO */
	CONF_TX_AC_ANY_TID = 0xff
};

struct conf_tx_ac_category {
	/*
	 * The AC class identifier.
	 *
	 * Range: enum conf_tx_ac
	 */
	u8 ac;

	/*
	 * The contention window minimum size (in slots) for the access
	 * class.
	 *
	 * Range: u8
	 */
	u8 cw_min;

	/*
	 * The contention window maximum size (in slots) for the access
	 * class.
	 *
	 * Range: u8
	 */
	u16 cw_max;

	/*
	 * The AIF value (in slots) for the access class.
	 *
	 * Range: u8
	 */
	u8 aifsn;

	/*
	 * The TX Op Limit (in microseconds) for the access class.
	 *
	 * Range: u16
	 */
	u16 tx_op_limit;
} __packed;

#define CONF_TX_MAX_TID_COUNT 8

/* Allow TX BA on all TIDs but 6,7. These are currently reserved in the FW */
#define CONF_TX_BA_ENABLED_TID_BITMAP 0x3F

enum {
	CONF_CHANNEL_TYPE_DCF = 0,   /* DC/LEGACY*/
	CONF_CHANNEL_TYPE_EDCF = 1,  /* EDCA*/
	CONF_CHANNEL_TYPE_HCCA = 2,  /* HCCA*/
};

enum {
	CONF_PS_SCHEME_LEGACY = 0,
	CONF_PS_SCHEME_UPSD_TRIGGER = 1,
	CONF_PS_SCHEME_LEGACY_PSPOLL = 2,
	CONF_PS_SCHEME_SAPSD = 3,
};

enum {
	CONF_ACK_POLICY_LEGACY = 0,
	CONF_ACK_POLICY_NO_ACK = 1,
	CONF_ACK_POLICY_BLOCK = 2,
};


struct conf_tx_tid {
	u8 queue_id;
	u8 channel_type;
	u8 tsid;
	u8 ps_scheme;
	u8 ack_policy;
	u32 apsd_conf[2];
} __packed;

struct conf_tx_settings {
	/*
	 * The TX ED value for TELEC Enable/Disable.
	 *
	 * Range: 0, 1
	 */
	u8 tx_energy_detection;

	/*
	 * Configuration for rate classes for TX (currently only one
	 * rate class supported). Used in non-AP mode.
	 */
	struct conf_tx_rate_class sta_rc_conf;

	/*
	 * Configuration for access categories for TX rate control.
	 */
	u8 ac_conf_count;
	/* struct conf_tx_ac_category ac_conf[4]; */
	struct conf_tx_ac_category ac_conf0;
	struct conf_tx_ac_category ac_conf1;
	struct conf_tx_ac_category ac_conf2;
	struct conf_tx_ac_category ac_conf3;

	/*
	 * AP-mode - allow this number of TX retries to a station before an
	 * event is triggered from FW.
	 * In AP-mode the hlids of unreachable stations are given in the
	 * "sta_tx_retry_exceeded" member in the event mailbox.
	 */
	u8 max_tx_retries;

	/*
	 * AP-mode - after this number of seconds a connected station is
	 * considered inactive.
	 */
	u16 ap_aging_period;

	/*
	 * Configuration for TID parameters.
	 */
	u8 tid_conf_count;
	/* struct conf_tx_tid tid_conf[8]; */
	struct conf_tx_tid tid_conf0;
	struct conf_tx_tid tid_conf1;
	struct conf_tx_tid tid_conf2;
	struct conf_tx_tid tid_conf3;
	struct conf_tx_tid tid_conf4;
	struct conf_tx_tid tid_conf5;
	struct conf_tx_tid tid_conf6;
	struct conf_tx_tid tid_conf7;

	/*
	 * The TX fragmentation threshold.
	 *
	 * Range: u16
	 */
	u16 frag_threshold;

	/*
	 * Max time in msec the FW may delay frame TX-Complete interrupt.
	 *
	 * Range: u16
	 */
	u16 tx_compl_timeout;

	/*
	 * Completed TX packet count which requires to issue the TX-Complete
	 * interrupt.
	 *
	 * Range: u16
	 */
	u16 tx_compl_threshold;

	/*
	 * The rate used for control messages and scanning on the 2.4GHz band
	 *
	 * Range: CONF_HW_BIT_RATE_* bit mask
	 */
	u32 basic_rate;

	/*
	 * The rate used for control messages and scanning on the 5GHz band
	 *
	 * Range: CONF_HW_BIT_RATE_* bit mask
	 */
	u32 basic_rate_5;

	/*
	 * TX retry limits for templates
	 */
	u8 tmpl_short_retry_limit;
	u8 tmpl_long_retry_limit;

	/* Time in ms for Tx watchdog timer to expire */
	u32 tx_watchdog_timeout;
} __packed;

enum {
	CONF_WAKE_UP_EVENT_BEACON    = 0x01, /* Wake on every Beacon*/
	CONF_WAKE_UP_EVENT_DTIM      = 0x02, /* Wake on every DTIM*/
	CONF_WAKE_UP_EVENT_N_DTIM    = 0x04, /* Wake every Nth DTIM */
	CONF_WAKE_UP_EVENT_N_BEACONS = 0x08, /* Wake every Nth beacon */
	CONF_WAKE_UP_EVENT_BITS_MASK = 0x0F
};

#define CONF_MAX_BCN_FILT_IE_COUNT 32

#define CONF_BCN_RULE_PASS_ON_CHANGE         BIT(0)
#define CONF_BCN_RULE_PASS_ON_APPEARANCE     BIT(1)

#define CONF_BCN_IE_OUI_LEN    3
#define CONF_BCN_IE_VER_LEN    2

struct conf_bcn_filt_rule {
	/*
	 * IE number to which to associate a rule.
	 *
	 * Range: u8
	 */
	u8 ie;

	/*
	 * Rule to associate with the specific ie.
	 *
	 * Range: CONF_BCN_RULE_PASS_ON_*
	 */
	u8 rule;

	/*
	 * OUI for the vendor specifie IE (221)
	 */
	u8 oui[3];

	/*
	 * Type for the vendor specifie IE (221)
	 */
	u8 type;

	/*
	 * Version for the vendor specifie IE (221)
	 */
	u8 version[2];
} __packed;

#define CONF_MAX_RSSI_SNR_TRIGGERS 8

enum {
	CONF_TRIG_METRIC_RSSI_BEACON = 0,
	CONF_TRIG_METRIC_RSSI_DATA,
	CONF_TRIG_METRIC_SNR_BEACON,
	CONF_TRIG_METRIC_SNR_DATA
};

enum {
	CONF_TRIG_EVENT_TYPE_LEVEL = 0,
	CONF_TRIG_EVENT_TYPE_EDGE
};

enum {
	CONF_TRIG_EVENT_DIR_LOW = 0,
	CONF_TRIG_EVENT_DIR_HIGH,
	CONF_TRIG_EVENT_DIR_BIDIR
};

struct conf_sig_weights {

	/*
	 * RSSI from beacons average weight.
	 *
	 * Range: u8
	 */
	u8 rssi_bcn_avg_weight;

	/*
	 * RSSI from data average weight.
	 *
	 * Range: u8
	 */
	u8 rssi_pkt_avg_weight;

	/*
	 * SNR from beacons average weight.
	 *
	 * Range: u8
	 */
	u8 snr_bcn_avg_weight;

	/*
	 * SNR from data average weight.
	 *
	 * Range: u8
	 */
	u8 snr_pkt_avg_weight;
} __packed;

enum conf_bcn_filt_mode {
	CONF_BCN_FILT_MODE_DISABLED = 0,
	CONF_BCN_FILT_MODE_ENABLED = 1
};

enum conf_bet_mode {
	CONF_BET_MODE_DISABLE = 0,
	CONF_BET_MODE_ENABLE = 1,
};

struct conf_conn_settings {
	/*
	 * Firmware wakeup conditions configuration. The host may set only
	 * one bit.
	 *
	 * Range: CONF_WAKE_UP_EVENT_*
	 */
	u8 wake_up_event;

	/*
	 * Listen interval for beacons or Dtims.
	 *
	 * Range: 0 for beacon and Dtim wakeup
	 *        1-10 for x Dtims
	 *        1-255 for x beacons
	 */
	u8 listen_interval;

	/*
	 * Firmware wakeup conditions during suspend
	 * Range: CONF_WAKE_UP_EVENT_*
	 */
	u8 suspend_wake_up_event;

	/*
	 * Listen interval during suspend.
	 * Currently will be in DTIMs (1-10)
	 *
	 */
	u8 suspend_listen_interval;

	/*
	 * Enable or disable the beacon filtering.
	 *
	 * Range: CONF_BCN_FILT_MODE_*
	 */
	u8 bcn_filt_mode;

	/*
	 * Configure Beacon filter pass-thru rules.
	 */
	u8 bcn_filt_ie_count;
	/* struct conf_bcn_filt_rule bcn_filt_ie[32]; */
	struct conf_bcn_filt_rule bcn_filt_ie0;
	struct conf_bcn_filt_rule bcn_filt_ie1;
	struct conf_bcn_filt_rule bcn_filt_ie2;
	struct conf_bcn_filt_rule bcn_filt_ie3;
	struct conf_bcn_filt_rule bcn_filt_ie4;
	struct conf_bcn_filt_rule bcn_filt_ie5;
	struct conf_bcn_filt_rule bcn_filt_ie6;
	struct conf_bcn_filt_rule bcn_filt_ie7;
	struct conf_bcn_filt_rule bcn_filt_ie8;
	struct conf_bcn_filt_rule bcn_filt_ie9;
	struct conf_bcn_filt_rule bcn_filt_ie10;
	struct conf_bcn_filt_rule bcn_filt_ie11;
	struct conf_bcn_filt_rule bcn_filt_ie12;
	struct conf_bcn_filt_rule bcn_filt_ie13;
	struct conf_bcn_filt_rule bcn_filt_ie14;
	struct conf_bcn_filt_rule bcn_filt_ie15;
	struct conf_bcn_filt_rule bcn_filt_ie16;
	struct conf_bcn_filt_rule bcn_filt_ie17;
	struct conf_bcn_filt_rule bcn_filt_ie18;
	struct conf_bcn_filt_rule bcn_filt_ie19;
	struct conf_bcn_filt_rule bcn_filt_ie20;
	struct conf_bcn_filt_rule bcn_filt_ie21;
	struct conf_bcn_filt_rule bcn_filt_ie22;
	struct conf_bcn_filt_rule bcn_filt_ie23;
	struct conf_bcn_filt_rule bcn_filt_ie24;
	struct conf_bcn_filt_rule bcn_filt_ie25;
	struct conf_bcn_filt_rule bcn_filt_ie26;
	struct conf_bcn_filt_rule bcn_filt_ie27;
	struct conf_bcn_filt_rule bcn_filt_ie28;
	struct conf_bcn_filt_rule bcn_filt_ie29;
	struct conf_bcn_filt_rule bcn_filt_ie30;
	struct conf_bcn_filt_rule bcn_filt_ie31;

	/*
	 * The number of consecutive beacons to lose, before the firmware
	 * becomes out of synch.
	 *
	 * Range: u32
	 */
	u32 synch_fail_thold;

	/*
	 * After out-of-synch, the number of TU's to wait without a further
	 * received beacon (or probe response) before issuing the BSS_EVENT_LOSE
	 * event.
	 *
	 * Range: u32
	 */
	u32 bss_lose_timeout;

	/*
	 * Beacon receive timeout.
	 *
	 * Range: u32
	 */
	u32 beacon_rx_timeout;

	/*
	 * Broadcast receive timeout.
	 *
	 * Range: u32
	 */
	u32 broadcast_timeout;

	/*
	 * Enable/disable reception of broadcast packets in power save mode
	 *
	 * Range: 1 - enable, 0 - disable
	 */
	u8 rx_broadcast_in_ps;

	/*
	 * Consecutive PS Poll failures before sending event to driver
	 *
	 * Range: u8
	 */
	u8 ps_poll_threshold;

	/*
	 * Configuration of signal average weights.
	 */
	struct conf_sig_weights sig_weights;

	/*
	 * Specifies if beacon early termination procedure is enabled or
	 * disabled.
	 *
	 * Range: CONF_BET_MODE_*
	 */
	u8 bet_enable;

	/*
	 * Specifies the maximum number of consecutive beacons that may be
	 * early terminated. After this number is reached at least one full
	 * beacon must be correctly received in FW before beacon ET
	 * resumes.
	 *
	 * Range 0 - 255
	 */
	u8 bet_max_consecutive;

	/*
	 * Specifies the maximum number of times to try PSM entry if it fails
	 * (if sending the appropriate null-func message fails.)
	 *
	 * Range 0 - 255
	 */
	u8 psm_entry_retries;

	/*
	 * Specifies the maximum number of times to try PSM exit if it fails
	 * (if sending the appropriate null-func message fails.)
	 *
	 * Range 0 - 255
	 */
	u8 psm_exit_retries;

	/*
	 * Specifies the maximum number of times to try transmit the PSM entry
	 * null-func frame for each PSM entry attempt
	 *
	 * Range 0 - 255
	 */
	u8 psm_entry_nullfunc_retries;

	/*
	 * Specifies the dynamic PS timeout in ms that will be used
	 * by the FW when in AUTO_PS mode
	 */
	u16 dynamic_ps_timeout;

	/*
	 * Specifies whether dynamic PS should be disabled and PSM forced.
	 * This is required for certain WiFi certification tests.
	 */
	u8 forced_ps;

	/*
	 *
	 * Specifies the interval of the connection keep-alive null-func
	 * frame in ms.
	 *
	 * Range: 1000 - 3600000
	 */
	u32 keep_alive_interval;

	/*
	 * Maximum listen interval supported by the driver in units of beacons.
	 *
	 * Range: u16
	 */
	u8 max_listen_interval;

	/*
	 * Default sleep authorization for a new STA interface. This determines
	 * whether we can go to ELP.
	 */
	u8 sta_sleep_auth;
} __packed;

enum {
	CONF_REF_CLK_19_2_E,
	CONF_REF_CLK_26_E,
	CONF_REF_CLK_38_4_E,
	CONF_REF_CLK_52_E,
	CONF_REF_CLK_38_4_M_XTAL,
	CONF_REF_CLK_26_M_XTAL,
};

enum single_dual_band_enum {
	CONF_SINGLE_BAND,
	CONF_DUAL_BAND
};

#define CONF_RSSI_AND_PROCESS_COMPENSATION_SIZE 15
#define CONF_NUMBER_OF_SUB_BANDS_5  7
#define CONF_NUMBER_OF_RATE_GROUPS  6
#define CONF_NUMBER_OF_CHANNELS_2_4 14
#define CONF_NUMBER_OF_CHANNELS_5   35

struct conf_itrim_settings {
	/* enable dco itrim */
	u8 enable;

	/* moderation timeout in microsecs from the last TX */
	u32 timeout;
} __packed;

enum conf_fast_wakeup {
	CONF_FAST_WAKEUP_ENABLE,
	CONF_FAST_WAKEUP_DISABLE,
};

struct conf_pm_config_settings {
	/*
	 * Host clock settling time
	 *
	 * Range: 0 - 30000 us
	 */
	u32 host_clk_settling_time;

	/*
	 * Host fast wakeup support
	 *
	 * Range: enum conf_fast_wakeup
	 */
	u8 host_fast_wakeup_support;
} __packed;

struct conf_roam_trigger_settings {
	/*
	 * The minimum interval between two trigger events.
	 *
	 * Range: 0 - 60000 ms
	 */
	u16 trigger_pacing;

	/*
	 * The weight for rssi/beacon average calculation
	 *
	 * Range: 0 - 255
	 */
	u8 avg_weight_rssi_beacon;

	/*
	 * The weight for rssi/data frame average calculation
	 *
	 * Range: 0 - 255
	 */
	u8 avg_weight_rssi_data;

	/*
	 * The weight for snr/beacon average calculation
	 *
	 * Range: 0 - 255
	 */
	u8 avg_weight_snr_beacon;

	/*
	 * The weight for snr/data frame average calculation
	 *
	 * Range: 0 - 255
	 */
	u8 avg_weight_snr_data;
} __packed;

struct conf_scan_settings {
	/*
	 * The minimum time to wait on each channel for active scans
	 *
	 * Range: u32 tu/1000
	 */
	u32 min_dwell_time_active;

	/*
	 * The maximum time to wait on each channel for active scans
	 *
	 * Range: u32 tu/1000
	 */
	u32 max_dwell_time_active;

	/* time to wait on the channel for passive scans (in TU/1000) */
	u32 dwell_time_passive;

	/* time to wait on the channel for DFS scans (in TU/1000) */
	u32 dwell_time_dfs;

	/*
	 * Number of probe requests to transmit on each active scan channel
	 *
	 * Range: u8
	 */
	u16 num_probe_reqs;

	/*
	 * Scan trigger (split scan) timeout. The FW will split the scan
	 * operation into slices of the given time and allow the FW to schedule
	 * other tasks in between.
	 *
	 * Range: u32 Microsecs
	 */
	u32 split_scan_timeout;
} __packed;

struct conf_sched_scan_settings {
	/*
	 * The base time to wait on the channel for active scans (in TU/1000).
	 * The minimum dwell time is calculated according to this:
	 * min_dwell_time = base + num_of_probes_to_be_sent * delta_per_probe
	 * The maximum dwell time is calculated according to this:
	 * max_dwell_time = min_dwell_time + max_dwell_time_delta
	 */
	u32 base_dwell_time;

	/* The delta between the min dwell time and max dwell time for
	 * active scans (in TU/1000s). The max dwell time is used by the FW once
	 * traffic is detected on the channel.
	 */
	u32 max_dwell_time_delta;

	/* Delta added to min dwell time per each probe in 2.4 GHz (TU/1000) */
	u32 dwell_time_delta_per_probe;

	/* Delta added to min dwell time per each probe in 5 GHz (TU/1000) */
	u32 dwell_time_delta_per_probe_5;

	/* time to wait on the channel for passive scans (in TU/1000) */
	u32 dwell_time_passive;

	/* time to wait on the channel for DFS scans (in TU/1000) */
	u32 dwell_time_dfs;

	/* number of probe requests to send on each channel in active scans */
	u8 num_probe_reqs;

	/* RSSI threshold to be used for filtering */
	s8 rssi_threshold;

	/* SNR threshold to be used for filtering */
	s8 snr_threshold;
} __packed;

struct conf_ht_setting {
	u8 rx_ba_win_size;
	u8 tx_ba_win_size;
	u16 inactivity_timeout;

	/* bitmap of enabled TIDs for TX BA sessions */
	u8 tx_ba_tid_bitmap;
} __packed;

struct conf_memory_settings {
	/* Number of stations supported in IBSS mode */
	u8 num_stations;

	/* Number of ssid profiles used in IBSS mode */
	u8 ssid_profiles;

	/* Number of memory buffers allocated to rx pool */
	u8 rx_block_num;

	/* Minimum number of blocks allocated to tx pool */
	u8 tx_min_block_num;

	/* Disable/Enable dynamic memory */
	u8 dynamic_memory;

	/*
	 * Minimum required free tx memory blocks in order to assure optimum
	 * performance
	 *
	 * Range: 0-120
	 */
	u8 min_req_tx_blocks;

	/*
	 * Minimum required free rx memory blocks in order to assure optimum
	 * performance
	 *
	 * Range: 0-120
	 */
	u8 min_req_rx_blocks;

	/*
	 * Minimum number of mem blocks (free+used) guaranteed for TX
	 *
	 * Range: 0-120
	 */
	u8 tx_min;
} __packed;

struct conf_fm_coex {
	u8 enable;
	u8 swallow_period;
	u8 n_divider_fref_set_1;
	u8 n_divider_fref_set_2;
	u16 m_divider_fref_set_1;
	u16 m_divider_fref_set_2;
	u32 coex_pll_stabilization_time;
	u16 ldo_stabilization_time;
	u8 fm_disturbed_band_margin;
	u8 swallow_clk_diff;
} __packed;

struct conf_rx_streaming_settings {
	/*
	 * RX Streaming duration (in msec) from last tx/rx
	 *
	 * Range: u32
	 */
	u32 duration;

	/*
	 * Bitmap of tids to be polled during RX streaming.
	 * (Note: it doesn't look like it really matters)
	 *
	 * Range: 0x1-0xff
	 */
	u8 queues;

	/*
	 * RX Streaming interval.
	 * (Note:this value is also used as the rx streaming timeout)
	 * Range: 0 (disabled), 10 - 100
	 */
	u8 interval;

	/*
	 * enable rx streaming also when there is no coex activity
	 */
	u8 always;
} __packed;

struct conf_fwlog {
	/* Continuous or on-demand */
	u8 mode;

	/*
	 * Number of memory blocks dedicated for the FW logger
	 *
	 * Range: 1-3, or 0 to disable the FW logger
	 */
	u8 mem_blocks;

	/* Minimum log level threshold */
	u8 severity;

	/* Include/exclude timestamps from the log messages */
	u8 timestamp;

	/* See enum wl1271_fwlogger_output */
	u8 output;

	/* Regulates the frequency of log messages */
	u8 threshold;
} __packed;

#define ACX_RATE_MGMT_NUM_OF_RATES 13
struct conf_rate_policy_settings {
	u16 rate_retry_score;
	u16 per_add;
	u16 per_th1;
	u16 per_th2;
	u16 max_per;
	u8 inverse_curiosity_factor;
	u8 tx_fail_low_th;
	u8 tx_fail_high_th;
	u8 per_alpha_shift;
	u8 per_add_shift;
	u8 per_beta1_shift;
	u8 per_beta2_shift;
	u8 rate_check_up;
	u8 rate_check_down;
	u8 rate_retry_policy[13];
} __packed;

struct conf_hangover_settings {
	u32 recover_time;
	u8 hangover_period;
	u8 dynamic_mode;
	u8 early_termination_mode;
	u8 max_period;
	u8 min_period;
	u8 increase_delta;
	u8 decrease_delta;
	u8 quiet_time;
	u8 increase_time;
	u8 window_size;
} __packed;

/*
 * The conf version consists of 4 bytes.  The two MSB are the wlcore
 * version, the two LSB are the lower driver's private conf
 * version.
 */
#define WLCORE_CONF_VERSION	(0x0003 << 16)
#define WLCORE_CONF_MASK	0xffff0000
#define WLCORE_CONF_SIZE	(sizeof(struct wlcore_conf_header) +	\
				 sizeof(struct wlcore_conf))

struct wlcore_conf_header {
	__le32 magic;
	__le32 version;
	__le32 checksum;
} __packed;

struct wlcore_conf {
	struct conf_sg_settings sg;
	struct conf_rx_settings rx;
	struct conf_tx_settings tx;
	struct conf_conn_settings conn;
	struct conf_itrim_settings itrim;
	struct conf_pm_config_settings pm_config;
	struct conf_roam_trigger_settings roam_trigger;
	struct conf_scan_settings scan;
	struct conf_sched_scan_settings sched_scan;
	struct conf_ht_setting ht;
	struct conf_memory_settings mem;
	struct conf_fm_coex fm_coex;
	struct conf_rx_streaming_settings rx_streaming;
	struct conf_fwlog fwlog;
	struct conf_rate_policy_settings rate;
	struct conf_hangover_settings hangover;
};

#define WL18XX_CONF_MAGIC	0x10e100ca
#define WL18XX_CONF_VERSION	0x00030003
#define WL18XX_CONF_MASK	0x0000ffff
#define WL18XX_CONF_SIZE	(WLCORE_CONF_SIZE + \
				 sizeof(struct wl18xx_priv_conf))

#define NUM_OF_CHANNELS_11_ABG 150
#define NUM_OF_CHANNELS_11_P 7
#define WL18XX_NUM_OF_SUB_BANDS 9
#define SRF_TABLE_LEN 16
#define PIN_MUXING_SIZE 2

struct wl18xx_mac_and_phy_params {
	u8 phy_standalone;
	u8 rdl;
	u8 enable_clpc;
	u8 enable_tx_low_pwr_on_siso_rdl;
	u8 auto_detect;
	u8 dedicated_fem;

	u8 low_band_component;

	/* Bit 0: One Hot, Bit 1: Control Enable, Bit 2: 1.8V, Bit 3: 3V */
	u8 low_band_component_type;

	u8 high_band_component;

	/* Bit 0: One Hot, Bit 1: Control Enable, Bit 2: 1.8V, Bit 3: 3V */
	u8 high_band_component_type;
	u8 number_of_assembled_ant2_4;
	u8 number_of_assembled_ant5;
	u8 pin_muxing_platform_options[2];
	u8 external_pa_dc2dc;
	u8 tcxo_ldo_voltage;
	u8 xtal_itrim_val;
	u8 srf_state;
	u8 srf1[16];
	u8 srf2[16];
	u8 srf3[16];
	u8 io_configuration;
	u8 sdio_configuration;
	u8 settings;
	u8 rx_profile;
	u8 per_chan_pwr_limit_arr_11abg[150];
	u8 pwr_limit_reference_11_abg;
	u8 per_chan_pwr_limit_arr_11p[7];
	u8 pwr_limit_reference_11p;
	u8 per_sub_band_tx_trace_loss[9];
	u8 per_sub_band_rx_trace_loss[9];
	u8 primary_clock_setting_time;
	u8 clock_valid_on_wake_up;
	u8 secondary_clock_setting_time;
	u8 board_type;
	/* enable point saturation */
	u8 psat;
	/* low/medium/high Tx power in dBm */
	s8 low_power_val;
	s8 med_power_val;
	s8 high_power_val;
	u8 padding[1];
} __packed;

enum wl18xx_ht_mode {
	/* Default - use MIMO, fallback to SISO20 */
	HT_MODE_DEFAULT = 0,

	/* Wide - use SISO40 */
	HT_MODE_WIDE = 1,

	/* Use SISO20 */
	HT_MODE_SISO20 = 2,
};

struct wl18xx_ht_settings {
	/* DEFAULT / WIDE / SISO20 */
	u8 mode;
} __packed;

struct wl18xx_priv_conf {
	/* Module params structures */
	struct wl18xx_ht_settings ht;

	/* this structure is copied wholesale to FW */
	struct wl18xx_mac_and_phy_params phy;
} __packed;

struct wlcore_conf_file {
	struct wlcore_conf_header header;
	struct wlcore_conf core;
	struct wl18xx_priv_conf wl18xx;
} __packed;

#endif
