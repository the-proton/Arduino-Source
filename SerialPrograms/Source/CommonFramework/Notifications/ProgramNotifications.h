/*  Program Notifications
 *
 *  From: https://github.com/PokemonAutomation/Arduino-Source
 *
 */

#ifndef PokemonAutomation_ProgramNotifications_H
#define PokemonAutomation_ProgramNotifications_H

#include <vector>
#include <QString>
#include <QImage>
#include "CommonFramework/Logging/LoggerQt.h"
#include "ProgramInfo.h"
#include "MessageAttachment.h"
#include "EventNotificationOption.h"

namespace PokemonAutomation{

class StatsTracker;
class ProgramEnvironment;


void send_program_notification(
    LoggerQt& logger, EventNotificationOption& settings,
    Color color,
    const ProgramInfo& info,
    const QString& title,
    const std::vector<std::pair<QString, QString>>& messages,
    QImage image = QImage(), bool keep_file = false
);

void send_program_telemetry(
    LoggerQt& logger, bool is_error, Color color,
    const ProgramInfo& info,
    const QString& title,
    const std::vector<std::pair<QString, QString>>& messages,
    const QString& file
);

#if 0
void send_program_status_notification(
    LoggerQt& logger, EventNotificationOption& settings,
    const ProgramInfo& info,
    const QString& message,
    const StatsTracker* current_stats = nullptr,
    const StatsTracker* historical_stats = nullptr,
    QImage image = QImage(), bool keep_file = false
);
#endif
void send_program_status_notification(
    ProgramEnvironment& env, EventNotificationOption& settings,
    const QString& message = "",
    QImage image = QImage(), bool keep_file = false
);

void send_program_finished_notification(
    LoggerQt& logger, EventNotificationOption& settings,
    const ProgramInfo& info,
    const QString& message,
    const StatsTracker* current_stats,
    const StatsTracker* historical_stats,
    QImage image = QImage(), bool keep_file = false
);
void send_program_finished_notification(
    ProgramEnvironment& env, EventNotificationOption& settings,
    const QString& message = "",
    QImage image = QImage(), bool keep_file = false
);

void send_program_recoverable_error_notification(
    ProgramEnvironment& env, EventNotificationOption& settings,
    const QString& message,
    QImage image = QImage(), bool keep_file = false
);

void send_program_fatal_error_notification(
    LoggerQt& logger, EventNotificationOption& settings,
    const ProgramInfo& info,
    const QString& message,
    const StatsTracker* current_stats,
    const StatsTracker* historical_stats,
    QImage image = QImage(), bool keep_file = false
);


}
#endif
